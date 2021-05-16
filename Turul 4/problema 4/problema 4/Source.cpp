#include <iostream>
#include "Peste.h"
#include "Caine.h"
#include "Animal.h"
int main()
{
	Peste p;
	Caine c;
	cout << "Peste\n";
	p.doarme();
	p.mananca();
	p.respira();
	cout << "CAine\n";
	c.doarme();
	c.mananca();
	c.respira();
	cout << "--------------------------------\n";
	Animal* ani[3];

	ani[0] = &p;
	ani[1] = &c;
	ani[2] = &p;

	for (int i = 0; i < 3; i++)
		ani[i]->respira();
	return 0;
}