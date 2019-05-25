#include "vehicle.h"
using namespace std;

Vehicle::Vehicle()
{
	make_ = "BMW ";
	year_ = 2018;
}

Vehicle::Vehicle(const string &make, int year)
{
	make_ = "BMW ";
	year_ = 2018;
}

string Vehicle::Make()
{
	return make_;
}



int Vehicle::Year()
{
	return year_;
}
