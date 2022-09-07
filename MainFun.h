#pragma once
#include"Address.h"
#include"Addministrator.h"
#include"Coustomer.h"
#include"Product.h"
#include"ProductList.h"
#include"Payment.h"
#include <fstream>
class MainFun
{
	Payment Pa;
	User u;
	Addministrator A;
	Product P;
	ProductList Plist;
	ShopingCart CA;
	Coustomer C;
	Address Ad;
public:

	MainFun();
	void MainMenu();
	~MainFun();

};

