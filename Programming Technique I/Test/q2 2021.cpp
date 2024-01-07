#include <iostream>
#include <string>
using namespace std;

void getInput(double& s1,double& s2,double& s3){
	cout<<"Q1 mark\t: ";
	cin>> s1;	
	cout<<"Q2 mark\t: ";
	cin>> s2;
	cout<<"Q3 mark\t: ";
	cin>> s3;
}

void dispTier(int& totm){
	if (totm >=75)
		cout << "\nTier\t: Tier 1\n";
	else if (totm >=40)
		cout << "\nTier\t: Tier 2\n";
	else 
		cout << "\nTier\t: Tier 3\n";
}

int calcAverage(int tots,int totallm){
	int avg=totallm/tots;
	cout<<"Average for "<<tots<<" students: "<< avg;
	return avg;
	
}

void dispSummary (int& totm){
		cout<<"\nTotal marks: "<<totm;
		dispTier(totm);
	
}


int main(){
	
	string name,Hname,Lname;
	double s1,s2,s3,tots=0,totallm=0,Lm=10000,Hm=0;
	int totm;
	do{
	cout<<"\n<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>\n";
	cout<<"Name\t: ";
	getline(cin,name);
	
	
	if(name=="")
	break;
	
	getInput(s1,s2,s3);
	
	totm=s1*0.35+s2*0.25+s3*0.4;
	
	cout<<"\n<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>";
	
	dispSummary (totm);
	
	if (totm>Hm){
		Hm=totm;
		Hname=name;
	}
	if (totm<Lm){
		Lm=totm;
		Lname=name;
	}
	totallm+=totm;
	tots+=1;
	
	cin.ignore();
		
	}while(name!="");
	
	cout<<"\n<<<<<<< RESULTS ANALYSIS >>>>>>>>\n";
	cout<<"Lowest mark\t: "<< Lm<<" ("<<Lname<<")\n";
	cout<<"Highest mark\t: "<< Hm<<" ("<<Hname<<")\n";
	calcAverage( tots,totallm);
	
	

return 0;
}
