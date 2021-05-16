#pragma once
#include "Functii.h"
class Sir : public Functii
{
public:
	void Inversare(string sir) override
	{
		reverse(sir.begin(), sir.end());
	}
	void Concatenare(string s1, string s2) override
	{
		s1 += s2;
	}
	string Intersectie(string s1, string s2) override
	{
		string res;
		int fr[73] = { 0 };
		for(int i=0;i<s1.length();i++)
			for(int j=0;j<s2.length();j++)
				if (s1[i] == s2[j] && fr[(unsigned int)s1[i] - 'a'] == 0)
				{
					res += s1[i];
					fr[(unsigned int)s1[i] - 'a'] = 1;
				}
		return res;
	}
};