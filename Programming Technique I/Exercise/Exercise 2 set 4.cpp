#include <iostream>

using namespace std;

int main(){
	
	int num;
	int sum =1;
	
	cout << "Enter an integer number: ";
	cin >> num ;
	
	while (num != 0){
		
	sum = sum * (num % 10);
	cout << num % 10;
	num = num /10 ;
	
	if (num!=0){
		cout << " * " ;
		
	}else{
		cout << " = " << sum << endl;
	}}
	
	cout << sum <<" is " ;
	
	if ( sum % 2 == 0){
		cout << "even number ";
		
	} else {
		cout << "odd number ";	
	}
	
	if ( sum % 3 == 0){
			cout << "& multiples of 3";
			
			if ( sum % 5 == 0){
				cout << " and 5";
			} else {
				return 0;
			}
		} else {
			return 0;
		}
		
	return 0;
	
}
