#include "person.h"

#include "iostream"
using namespace std;

Person::Person(const string & ln, const char * fn)
{
	lname = ln;
	fname = fn;
}

void Person::Show() const 
{
	cout << fname << " " << lname;
}

void Person::FormalShow() const 
{
	cout << lname << ", " << fname;
}