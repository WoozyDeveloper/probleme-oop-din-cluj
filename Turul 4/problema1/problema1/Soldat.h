#pragma once
#include "Militar.h"
class Soldat : public Militar
{
public:
	void sunt_militar() override
	{
		cout << "Sunt soldat" << '\n';
	}

	Soldat()
	{
		sunt_militar();
	}
};