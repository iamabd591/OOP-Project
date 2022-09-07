#pragma once
#include<iostream>
#include<string>
#include"ShopingCart.h"
#include"User.h"
#include"Payment.h"
using namespace std;
class Coustomer:public User,public ShopingCart
{
protected:
	Payment payment;
public:

	Coustomer();
	Coustomer(string n, string e, string p, string g, string ph, string bn, string ac);
	void Display();
	~Coustomer();
};