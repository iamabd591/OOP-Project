#include "Address.h"
#include<iostream>
#include<string>
using namespace std;
Address::Address()
{
	this->street_no = "";
	this->house = "";
	this->city = "";
	this->country = "";
	this->zip_code = "";
}
Address::Address(string hn, string sn, string c, string zc, string co) {
	this->house = hn;
	this->street_no = sn;
	this->city = c;
	this->country = co;
	this->zip_code = zc;
}
			///setter///
	void Address::sethouse_no(string hn) {
		this->house = hn;
	}
	void Address::setstreet_no(string sn) {
		this->street_no = sn;
	}
	void Address::setcity(string c) {
		this->city = c;
	}
	void Address::setcountry(string co) {
		this->country = co;
	}
	void Address::setzip_code(string zc) {
		this->zip_code = zc;

}

		///Getter///
string Address::gethouse_no()const {
	return this->house;
}
string Address::getstreet_no()const {
	return this->street_no;
}
string Address::getcity()const {
	return this->city;
}
string Address::getcountry()const {
	return this->country;
}
string Address::getZipcode()const {
	return this->zip_code;
}
string Address::getAddressInfo() {
	string cncat = "";
	cncat  = "Address:" + this->house;
	cncat += "\nStreet no:" + this->street_no;
	cncat += "\nCountry Name:" + this->country;
	cncat += "\nCity:" + this->city;
	cncat += "\nZip-Code:" + this->zip_code;
	return cncat;
}
Address::~Address()
{

}
