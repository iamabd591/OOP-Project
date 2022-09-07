#pragma once
#include<iostream>
#include<string>
using namespace std;
class Address
{
protected:
	string house;
	string street_no;
	string country;
	string city;
	string zip_code;
public:
	Address();
	Address(string hn, string sn, string c, string zc ,string co);

	///setter///
	void sethouse_no(string hn);
	void setstreet_no(string sn);
	void setcity(string c);
	void setcountry(string co);
	void setzip_code(string zc);

	///Getter///
	string gethouse_no()const;
	string getstreet_no()const;
	string getcity()const;
	string getcountry()const;
	string getZipcode()const;
	string getAddressInfo();
	~Address();
};

