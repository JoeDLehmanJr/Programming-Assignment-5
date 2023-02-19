#include "FeetInches.h"
#include <iostream>
#include <iomanip>
using namespace std;

FeetInches::FeetInches(double ft, double in)
{
	setData(ft, in);
}

void FeetInches::setData(double ft, double in)
{
	feet = ft;
	inches = in;
	simplify(feet, inches);
}

const int FeetInches::getFeet() const
{
	return feet;
}

const int FeetInches::getInches() const
{
	return inches;
}

std::string FeetInches::toString()
{
	return to_string(feet) + "' " + to_string(inches) + "\"";
}

bool FeetInches::operator!=(const FeetInches&) const
{
	return false;
}

bool FeetInches::operator<=(const FeetInches&) const
{
	return false;
}

bool FeetInches::operator>=(const FeetInches&) const
{
	return false;
}

void FeetInches::simplify(double& ft, double& in)
{
	inches += FeetInches::INCHES_PER_FOOT * feet;
	feet = inches / FeetInches::INCHES_PER_FOOT;
	inches %= FeetInches::INCHES_PER_FOOT;
}

ostream& operator<<(ostream& output, const FeetInches& number)
{
	output << number.feet << " feet, " << number.inches << " inches";
	return output;
}

istream& operator>>(istream& input, FeetInches& number)
{
	input >> number.feet;
	input.ignore(4);
	input >> number.inches;
	return input;
}
