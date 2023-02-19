#ifndef FEET_INCHES_H
#define FEET_INCHES_H
#include <string>
#include <iostream>

class FeetInches
{
public:
	friend ostream& operator<<(ostream&, const FeetInches&);
	friend istream& operator>>(istream&, FeetInches&);
	static const int INCHES_PER_FOOT = 12;
	
	FeetInches();
	FeetInches(int f = 0, int i = 0);
	void setData(int f, int i);
	const int getFeet() const;
	const int getInches() const;
	std::string toString();
	
	bool operator!=(const FeetInches&) const;
	bool operator<=(const FeetInches&) const;
	bool operator>=(const FeetInches&) const;

private:
	int inches;
	int feet;
	void simplify(double& f, double& i);
};
#endif