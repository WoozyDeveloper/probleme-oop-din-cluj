#pragma once
#include <iostream>
using std::cout;
class Animal
{
public:
	virtual void respira() {}
	virtual void mananca()
	{
		cout << "Mananca mancare\n";
	}
	virtual void doarme()
	{
		cout << "Somn usor\n";
	}
};