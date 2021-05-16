#pragma once
#include "Ofiter.h"
class Capitan : public Ofiter
{
public:
	Capitan()
	{
		sunt_militar();
	}
	void sunt_militar() override
	{
		cout << "Sunt capitan" << '\n';
	}
};