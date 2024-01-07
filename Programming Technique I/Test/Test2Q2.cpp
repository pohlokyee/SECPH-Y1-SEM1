////////////////////// Test 2, 2023/2024 (Sem 1) //////////////////////
//// QUESTION 2
//// Name:POH LOK YEE
//// Matric No:A23CS0262
//// Date / Day: 4/1/2024
///////////////////////////////////////////////////////////////////////

// Task 7. Directives, library, header, etc.
#include <iostream>
#include <iomanip>

using namespace std;

// Task 6. Function prototypes
double calculateLateFees(double );
void displayMenu();
void displayLibraryInfo();
void getUserInput(double& );


// Task 5. Main function
int main(){
	
	int choice;
	double day;
	double fee,totlatefee;
	
	do{
	cout<<"************Library Book Checkout System************\n";
	
	displayMenu();
	
	cout<<"Enter your choice (1-3): ";
	
	cin>> choice;
	
	if (choice == 1){
		getUserInput(day);
		totlatefee=calculateLateFees(day);
		cout<<"Late fees: RM"<<fixed<<setprecision(2)<<totlatefee<<endl;
		
	}else if (choice == 2){
		cout<<"************Library Information************\n";
		displayLibraryInfo();
		
	}else if (choice == 3){
		cout<<"Exiting the program. Thank you!";
		break;
	}else{
		cout<<"Invalid choice. Please enter a number between 1 and 3.\n";
	}
	
	}while(choice!=3);
	
	return 0;
	
}

// Task 1. Function calculateLateFees  
double calculateLateFees(double day){
	double fee,totlatefee;
	if(day>14){
		totlatefee=3.5+7+((day-14)*2);
	}else if (day>7){
		totlatefee=7+((day-7)*1);
	}else{
		totlatefee=day*0.5;
	}
	return totlatefee;

}
// Task 2. Function displayMenu 
void displayMenu(){
	cout<<"1. Calculate Late Fees\n";
	cout<<"2. Display Library Information\n";
	cout<<"3. Quit\n";
}

// Task 3. Function displayLibraryInfo 
void displayLibraryInfo(){
	cout<<"Library Name: UTM Library\n";
	cout<<"Address: Skudai, Johor\n";
	cout<<"Contact: (123) 456 7890\n";
}

// Task 4. Function getUserInput with reference parameter
void getUserInput(double& day){
	cout<< "Enter the number of days the book is overdue: ";
	cin>>day;
}
