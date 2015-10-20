#pragma once
#include "tovar.h"
class Tort :
	public Tovar
{
	int kg;
public:
	Tort(void);
	void set4(int x);
	void get4();
	~Tort(void);
};