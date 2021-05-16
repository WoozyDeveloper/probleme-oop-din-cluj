#pragma once
#include "Animal.h"
class Caine : public Animal
{
public:
	void mananca() override
	{
		cout << "Mananca carne\n";
	}
	void respira() override
	{
		cout << "Respira aer aerian\n";
	}
};