#include <iostream>
#include <string>

using namespace std;

void dispStatus(int activecases){
	if (activecases>40){
		cout << "Red Zone";
	}else if (activecases>=21){
		cout << "Orange Zone";
	}else if (activecases>=1){
		cout << "Yellow Zone";
	}else{
		cout << "Green Zone ";
	}
}
void getInput(int& totcases,int& newcases,int& totdeath,int& totrecover){
	cout << "Total cases\t: ";
	cin >> totcases;
	cout << "New cases\t: ";
	cin >> newcases;
	cout << "Total death\t: " ;
	cin >> totdeath;
	cout<< "Total recovered\t: ";
	cin >> totrecover;
}

void dispOutput(int activecases){
	cout << "Active cases \t: "<< activecases << endl;
	cout << "Status\t\t: " ;
	dispStatus(activecases);
	cout << "\n";
}

int calcAverage (int totstate, int totactivecases){
	int average= totactivecases / totstate ;
	return average;
}

int main(){
	string state,hstate;
	int totcases,newcases,totdeath,totrecover,activecases,totstate=0,totactivecases=0,average,highest=0;
	char input;
	do{
	cout <<endl<<"<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>>> \n";
	cout << "State name \t: ";
	
	getline(cin,state);
	
	getInput(totcases,newcases,totdeath,totrecover);
	
	cout <<endl<<"<<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>>>>> \n";
	
	activecases=(totcases+newcases-totdeath-totrecover);

	dispOutput(activecases);
	
	totstate+=1;
	totactivecases+=activecases;
	
	if (activecases>highest){
		highest=activecases;
		hstate=state;
	}
		
	cout << endl <<  "Press <Enter> to continue...";

	cin.ignore();
	
	} while (cin.get()=='\n');
	
	average=calcAverage(totstate,totactivecases);
	
	cout <<endl<<"<<<<<<<<<<<< ACTIVE CASES >>>>>>>>>>>>> \n";
	cout << "Total: " << totactivecases << endl;
	cout << "Highest:" << highest << "(" << hstate << ")" << endl;
	cout << "Average for " << totstate << " states: " << average;
	
}

