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
	
	cout << sum << " is multiples of";
	
	if (sum % 7 == 0){
		cout << " 7 " ;
		
		if (sum % 4 == 0){
			cout << "and 4 ";
		} else if (sum % 5 == 0){
			cout << "and 5 ";
		} else {
			return 0;
		}
		
	}else if (sum % 4==0){
		cout << " 4 " ;
		if (sum % 5 == 0){
		cout << "and 5 ";
		} else {
			return 0 ;
		}
		
	}
		return 0;
}
	
	
	
	
	

