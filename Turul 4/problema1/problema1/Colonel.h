#pragma once
#include "Ofiter.h"
class Colonel : public Ofiter
{
public:
	Colonel()
	{
		sunt_militar();
	}
	void sunt_militar() override
	{
		cout << "Sunt colonel" << '\n';
	}
};