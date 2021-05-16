#pragma once
#include <string>
using namespace std;
class Functii
{
public:
	Functii(const string s1, const string s2);
	virtual string Intersectie(string,string) = 0;
	virtual void Inversare(string sir) = 0;
	virtual void Concatenare(string,string) = 0;
};