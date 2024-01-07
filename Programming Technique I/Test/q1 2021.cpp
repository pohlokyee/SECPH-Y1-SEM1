#include <iostream>
using namespace std;

// function prototypes

void display_Question(int&);//error2
void yes_No(char&);
int get_Status(char, char, char);//error3

// start main function

int main() {
	
	char red_zone, close_contact, fever; //two possible character values
//only: 'y' -> yes, 'n' -> no

	int status; // 0 -> GREEN, 1 -> YELLOW, 2 -> ORANGE, 3 -> RED
	
	for (int i = 1; i <= 3; i++) { //error9
		display_Question(i); //error8
	if (i == 1)
		yes_No(red_zone); // set red_zone either 'y' or 'n'
	else if (i == 2)
		yes_No(close_contact); // set close_contact either 'y' or 'n'
	else
		yes_No(fever); // set fever either 'y' or 'n'
	}
// get risk status based on red_zone, close_contact, fever parameters

	status = get_Status(red_zone, close_contact, fever);
	cout << "Your Covid-19 risk status is ";
	switch (status) { 
		case 0: cout << "GREEN"; break;
		case 1: cout << "YELLOW"; break;
		case 2: cout << "ORANGE"; break; //error4
		case 3: cout << "RED"; break; //error5
	}
		cout << "\n";
	return 0;
}
// start new user-defined functions
	void display_Question(int& q) {
	switch (q){ //error7
		case 1: cout << "Living in red zone?\n"; break;
		case 2: cout << "Have a close contact with Covid-19 patient?\n";

		break;

		case 3: cout << "Body temperature >= 38 degrees Celcius?\n";
		break; //error6
	}
}
	void yes_No(char& ans) {
	do {
		cout << "Please enter your answer (y / n): ";
		cin >> ans;
	} while (ans != 'n' && ans != 'y'); //error10
	cout << '\n';
	}
	
	int get_Status(char rz, char cc, char f) { //error1
		int s = 0;
		if (rz == 'y') s++;
		if (cc == 'y') s++;
		if (f == 'y') s++;
	return s;
	}
