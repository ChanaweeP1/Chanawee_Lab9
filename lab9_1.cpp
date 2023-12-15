#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double interest,Total,payment;
	cout << "Enter initial loan: ";
	cin >> Total;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	for(int i=0;Total>0;i++){
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i+1; 
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Total*(interest/100);
	Total=Total+Total*(interest/100);
	cout << setw(13) << left << Total;
	if(Total < payment) 
	payment = Total ;
	cout << setw(13) << left << payment;	
	Total=Total-payment;
	cout << setw(13) << left << Total;
	cout << "\n";	
	}
	return 0;
}
