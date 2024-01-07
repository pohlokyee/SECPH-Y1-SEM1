#include <iostream>
#include <string>

using namespace std;

void readQty(double& A, double& B, double& C){
	do{
		cout<< "Product A: ";
		cin >> A;
	}while((0>A) || (A>100));
	
	do{
		cout<< "Product B: ";
		cin >> B;
	}while((0>B) || (B>100));

	do{
		cout<< "Product C: ";
		cin >> C;
	}while((0>C) || (C>100));
}

	void displayHighProd(double& comA,double& comB,double& comC){
		
		double highest;
		char product;
		if (comA > highest){
			
			if (comA > comB){
				
				if (comA >comC){
					highest=comA;
					product='A';
				}
				
			}else if (comB>comC){
					highest=comB;
					product='B';
			}else{
				highest=comC;
				product='C';
			}
		}else if(comB>highest){
			if (comB>comC){
				highest=comC;
				product='C';
			}else{
				highest=comB;
				product='B';
			}
		}	
	cout<<"Highest commision - Product " << product<<": RM"<<highest;
	}
	
	double calcAvrg(double numAgent,double totcom){
		return totcom/4;
	}
	
	void summaryCom(double comA,double comB,double comC ,double totcomproduct){
		cout<<"Total of commision for three products: RM"<< totcomproduct<<endl;
		displayHighProd(comA,comB,comC);
	}

int main(){
	string agent,Lagent,Hagent,HAagent,HBagent,HCagent;
	double A,B,C,comA,comB,comC,totcomproduct;
	double totcom=0,numAgent=0,Lcom=1000000,Hcom=0,HA=0,HB=0,HC=0;
	int avrg;
	
	do{
	cout<<endl<<"----------------------AGENT------------------------\n";
	cout<<"Agent Name:" ;
	getline(cin,agent);
	numAgent+=1;
	
	if(agent == ""){
		break;
	}
	readQty(A,B,C);
	
	cout<<"-------------------SALES SUMMARY-------------------\n";
	comA=A*(150*0.025);
	comB=B*(300*0.05);
	comC=C*(450*0.1);
	totcomproduct=comA+comB+comC;
	
	
	if (comA>HA){
		HAagent=agent;
		HA=comA;
	}
	if (comB>HB){
		HBagent=agent;
		HB=comB;
	}
	
	if (comC>HC){
		HCagent=agent;
		HC=comC;
	}
	
	summaryCom(comA,comB,comC,totcomproduct);
	if (totcomproduct>Hcom){
		Hagent=agent;
		Hcom=totcomproduct;
	}else if (totcomproduct<Lcom){
		Lagent=agent;
		Lcom=totcomproduct;
	}
	totcom+=totcomproduct;
	
	cin.ignore();
	cout<<endl;
	}while(agent!= "");
	
	avrg=calcAvrg(numAgent,totcom);
	
	cout<<"------------------SALES ANALYSIS-------------------\n";
	cout<<"Lowest commission for three products: RM "<<Lcom<<" ("<<Lagent<<")"<<endl;
	cout<<"Highest commission for three products: RM "<<Hcom<<" ("<<Hagent<<")"<<endl;
	cout<<"Highest commission for Product A: RM "<<HA<<" ("<<HAagent<<")"<<endl;
	cout<<"Highest commission for Product B: RM "<<HB<<" ("<<HBagent<<")"<<endl;
	cout<<"Highest commission for Product C: RM "<<HC<<" ("<<HCagent<<")"<<endl;
	cout<<"Total of commission for 4 agents: RM "<<totcom<<endl;
	cout<<"Average commission for 4 agents: RM "<< avrg;
	return 0;
}
