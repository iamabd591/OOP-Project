#include "Payment.h"
Payment::Payment() {
	this->IBankuserid = "";
	this->IbankingPassword = "";
	this->CardNumber = "";
	this->PinNumber = 0;
}
Payment::Payment(string bu, string ip, string cn,  int p,  double pa) {
	this->IBankuserid =bu;
	this->IbankingPassword = ip;
	this->CardNumber = cn;
	this->PinNumber = p;
}
void Payment::setBankuserid(string bu) {
	this->IBankuserid = bu;
}
void Payment::setIbankingPassword(string ip) {
	this->IbankingPassword = ip;
}
void Payment::setCardNumber(string cn) {
	this->CardNumber = cn;
}

void Payment::setPinNumber(int p) {
	this->PinNumber = p;
}

string Payment::getBankuserid() {
	return this->IBankuserid;
}
string Payment::getIbankingPassword() {
	return this->IbankingPassword;
}
string Payment::getCardNumber() {
	return this->CardNumber;
}

int Payment::getPinNumber() {
	return this->PinNumber ;
}

void Payment::paymentperference(double to) {
	this->TotalPrice = to;
	int option = 0;
A:
	cout << "\t\t\t\t******************************************" << endl;
	cout << "\t\t\t\tPlease Selected The Method For The Payment" << endl;
	cout << "\t\t\t\t******************************************" << endl; 
	cout << "\t\t\t\tPress 1 For Credit Card:    "  << endl;
	cout << "\t\t\t\tPress 2 For On-Line Payment:"  << endl;
	cout << "\t\t\t\tPress 3 For Cash On Delivery:" << endl;
	cin >> option;
	system("cls");
	switch (option)
	{
	case 1:
		if (this->TotalPrice==0)
		{
			cout << "\t\t\t\tYou Can not BUY AnyThing" << endl;
			break;
		}
		else
		{
			cout << "\t\t\t\t*****************************************" << endl;
			cout << "\t\t\t\t  Welcome To Credit Card Payment Method  " << endl;
			cout << "\t\t\t\t*****************************************" << endl;
			cout << "\t\t\t\tEnter Your Card Number:";
			cin >> this->CardNumber;
			cout << "\t\t\t\tEnter Your Pin Number:";
			cin >> this->PinNumber;
			cout << "\t\t\t\tThis " << this->TotalPrice << " Has Been Deducted From Your Account" << endl;
			cout << "\t\t\t\t[Payment Successfull Done]" << endl;
			cout << "\t\t\t\tThanks For Shopping Form Our Store" << endl;
			cout << "\t\t\t\tYour Parsal is Shipped in 2-3 days" << endl;
			cout << endl;
			break;
		}
		
		
	case 2:
		if (CalculateTotalPrice() == 0)
		{
			cout << "\t\t\t\tYou Can not BUY AnyThing" << endl;
			break;
		}
		else
		{
			cout << "Welcome To On-Line Payment Method";
			cout << "\t\t\t\t*************************************" << endl;
			cout << "\t\t\t\t  Welcome To On-Line Payment Method  " << endl;
			cout << "\t\t\t\t*************************************" << endl;
			cout << "\t\t\t\tEnter Your On-Line Banking Id:";
			cin >> this->IBankuserid;
			cout << "\t\t\t\tEnter Your On-Line Banking Pasword:";
			cin >> this->IbankingPassword;
			cout << "\t\t\t\tThis " << this->TotalPrice << " Has Been Deducted From Your Account" << endl;
			cout << "\t\t\t\t[Payment Successfull Done]" << endl;
			cout << "\t\t\t\tYour Parsal is Shipped in 2-3 days" << endl;
			cout << "\t\t\t\tThanks For Shopping Form Our Store" << endl;
			cout << endl;
			break;
		}
		
	case 3:
		if (this->CalculateTotalPrice() == 0)
		{
			cout << "\t\t\t\tYou Can not BUy AnyThing" << endl;
			break;
		}
		else
		{
			cout << "\t\t\t\tYour Parsal is Shipped in 2-3 days" << endl;
			break;

		}
	default:
		goto A;
		cout << "Invalid Input" << endl;
	}
}
Payment::~Payment() {

}
