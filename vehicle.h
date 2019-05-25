#pragma once
#include <string>
using namespace std;
class Vehicle
{
public:
	Vehicle(); 
	Vehicle(const string &make, int year);
	~Vehicle() {};

	string Make();
	int Year();

private:
	int year_;
	string make_;
};
