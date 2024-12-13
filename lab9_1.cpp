#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	cout << "Enter initial loan: ";
	double loan;
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	double interest_rate;
	cin >> interest_rate;
	cout << "Enter amount you can pay per year: ";
	double payment;
	cin >> payment;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int i = 1;
	double interest = 0;
	while (loan != 0)
	{
		interest = (loan * (interest_rate/100));
		cout << setw(13) << left << i; 
		cout << setw(13) << left << setprecision (2) << fixed << loan;
		cout << setw(13) << left << setprecision (2) << fixed << interest;
		double new_loan =  loan + interest;
		cout << setw(13) << left << setprecision (2) << fixed << new_loan;
		if (new_loan < payment){
			payment = new_loan;
		}
		cout << setw(13) << left << setprecision (2) << fixed << payment;
		loan = new_loan - payment;
		cout << setw(13) << left << setprecision (2) << fixed << loan;
		cout << "\n";
		i++;
	}
	
	return 0;
}