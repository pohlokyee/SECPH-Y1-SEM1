#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void readFile(double [],int&);
void computeC(double [],double [],int&);
void average(double [],int& ,double& ,double& );
char grade(double, int&, int&, int&);
void writeFile( double [], double [],char ,int ,int& ,int& ,int& );

int main(){
	
	int count=0,numL=0,numM=0,numH=0;
	char grd;
	double dataF[10],dataC[10],totdata=0,avg;
	
	readFile(dataF,count);
	
	computeC(dataF,dataC,count);
	
	average(dataC,count,totdata,avg);
		
	writeFile(dataC,dataF,grd,count,numH,numM,numL);
	
	cout<<"Average of the temperature in Celcius: "<<fixed<<setprecision(1)<<avg<<endl;
	cout<<"Number of high temperature: "<<numH<<endl;
	cout<<"Number of medium temperature: "<<numM<<endl;
	cout<<"Number of low temperature: "<<numL<<endl;
		
	return 0;
}

void readFile(double dataF[],int& count){

	fstream infile("data F.txt", ios::in);
	
	for(int i=0 ; !infile.eof() ; i++){
		infile>>dataF[i];
		count++;	
	}	
	infile.close() ;
}
	
void computeC(double dataF[],double dataC[],int& count){

	for(int i=0;i<count;i++){
		dataC[i]= 5.0/9.0*(dataF[i]-32);
	}
}

void average(double dataF[],int& count,double& totdata,double& avg){
	
	for(int i=0;i<count;i++){
		totdata+=dataF[i];
	}
    avg=totdata/count; 
}

char grade(double dataC,int& numH,int& numM,int& numL){
	
		if (dataC>=35){
			numH+=1;
			return 'H';
		}else if (dataC>=20){
			numM+=1;
			return 'M';
		}else{
			numL+=1;
			return 'L';
		}		
}

void writeFile(double dataC[], double dataF[],char grd,int count,int& numH,int& numM,int& numL){
	
	fstream outfile("output temperature.txt", ios::out);

	outfile<<endl<< setw(12)<<"C(Celcius)"<<setw(20)<<"F(Farenheit)"<<setw(25)<<"Description";
	outfile<<endl<< setw(12)<<"=========="<<setw(20)<<"============"<<setw(25)<<"==========="<<endl;

	for(int i=0;i<count;i++){
		grd=grade(dataC[i],numH,numM,numL);
		outfile<<setw(9)<< fixed << setprecision(2)<< dataC[i] << setw(19) << fixed << setprecision(2)<< dataF[i]<< setw(24)<<grd<<endl;
	}
	outfile.close();
}

