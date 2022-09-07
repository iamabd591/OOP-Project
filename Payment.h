#pragma once
#include<iostream>
#include<string>
#include"ShopingCart.h"
using namespace std;
class Payment:public ShopingCart
{
private:
	string IBankuserid;
	string IbankingPassword;
	string CardNumber;
	int  PinNumber;
public:
	Payment();
	Payment(string bu, string ip, string cn, int p, double pa);
	void setBankuserid(string);
	void setIbankingPassword(string);
	void setCardNumber(string);
	void setPinNumber(int);

	string getBankuserid();
	string getIbankingPassword();
	string getCardNumber();
	int getPinNumber();
	void paymentperference(double to);
	~Payment();
};

