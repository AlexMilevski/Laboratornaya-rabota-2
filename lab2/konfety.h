#pragma once
#include "tovar.h"
class Konfety :
	public Tovar
{
	int sum;
public:
	Konfety(void);
	void set3(int x);
	void get3();
	~Konfety(void);
};
