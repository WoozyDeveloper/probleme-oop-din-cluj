#pragma once
#include "Militar.h"
class Ofiter : public Militar
{
public:
	Ofiter()
	{
		sunt_militar();
	}
	void sunt_militar() override
	{
		cout << "Sunt ofiter" << '\n';
	}
};