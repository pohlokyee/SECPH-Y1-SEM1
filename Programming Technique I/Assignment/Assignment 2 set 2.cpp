//POH LOK YEE A23CS0262
//WOO CHENG SHUAN A23CS0283

#include <iostream>
#include <iomanip>

using namespace std;

double calculation (int price, int DownPayment, int years, double rate, double monthlyInstallment ){
	
	double totPrice;
	
	totPrice = price - DownPayment;
	monthlyInstallment = (totPrice + totPrice * years * (rate/100)) / (years * 12) ;
	
	return monthlyInstallment;
}

int main(){
	
	int model,var,reg,DownPayment, years ;
	double price=0,rate,MontlyInstallment ;
	char ans ;
	
	do{
	cout << "Proton Car Loan Calculator"<< endl << endl ;
	cout << "Model [1-X50, 2-Exora, 3-Persona]: ";
	cin >> model ;
	cout << "Variants [1-1.6L Standard CVT, 2-1.6L Premium CVT]: ";
	cin >> var ;
	cout << "Region [1-Peninsular Malaysia , 2-East Malaysia]: ";
	cin >> reg ;
	
	
	cout << endl << endl << "Car Info" << endl;
	cout << "Model: ";
	
	if ( model == 1)
		cout << "X50";
	else if ( model == 2)
		cout << "Exora";
	else if ( model == 3){
		cout << "Persona";
		price+= 54600 ;
		}
		
	cout << endl << "Variant: ";
	
	if ( var == 1)
		cout << "1.6L Standard CVT";
	else if ( var == 2)
		cout << "1.6L Premium CVT";
		
	cout << endl << "Region: ";
	
	if ( reg == 1)
		cout << "Peninsular Malaysia";
	else if ( reg == 2)
		cout << "East Malaysia";
		
	cout << endl <<"Paint Type: Metallic"<< endl ;
	cout << "Price (MYR): "  << fixed << setprecision(2) << price << endl << endl;
	
	cout << "Down Payment (MYR): ";
	cin >> DownPayment ;
	cout << "Interest Rate (%): ";
	cin >> rate ;
	cout << "Repayment period (in years): ";
	cin >> years;
	
	double monthlyInstallment = calculation ( price, DownPayment,  years,  rate, monthlyInstallment );
	
	cout << endl << "MONTHLY INSTALLMENT (MYR): "<< fixed << setprecision(2) << monthlyInstallment << endl << endl;
	
	cout << "Do you want to enter other data? [Y @ N]: ";
	cin >> ans ;

	}while ((ans=='Y')||(ans=='y'));
	
	cout << endl << "Thank you :)" ;
	
	return 0;
}
