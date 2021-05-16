#pragma once
#include "Animal.h"
class Peste : public Animal
{
public:
	void respira() override
	{
		cout << "Respira prin branhii ca reptilienii\n";
	}
	void doarme() override
	{
		cout << "Doarme doarme\n";
	}
};
