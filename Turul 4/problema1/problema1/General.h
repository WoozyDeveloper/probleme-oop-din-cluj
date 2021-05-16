#pragma once
#include "Ofiter.h"
class General : public Ofiter
{
public:
	General()
	{
		sunt_militar();
	}
	void sunt_militar() override
	{
		cout << "Sunt general" << '\n';
	}
};