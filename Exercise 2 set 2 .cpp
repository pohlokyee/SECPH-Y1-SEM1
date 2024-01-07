#include <iostream>

using namespace std;

int main (){
	
	int num;
	int sum=0;
	
	cout << "Enter an integer number: ";
	cin >> num ;
	
	while ( num!=0){

	sum = sum + num % 10;
	cout << num % 10 ;
	num = num / 10 ;
	
	if (num!=0){
		cout << " + " ;
		
	}else{
		cout << " = " << sum << endl;
	}
	}
	
	if ( sum % 2 == 0){
		cout << sum << " is even number ";
		
		if ( sum % 4 ==0){
			cout << "& multiples of 4" ;
			
				if (sum % 5 == 0){
					cout << " and 5";
				}else{
					return 0;
				}
		}else{
			return 0;
		}
		
	}else{
		cout << sum << " is odd number ";
		
		if (sum % 5 == 0){
			cout << "& multiples of 5";
		}else{
			return 0;
		}
	}
	return 0;
}
