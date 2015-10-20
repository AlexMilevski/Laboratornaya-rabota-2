#pragma once
#include "prodykt.h"
class Tovar :
	public Prodykt
{
	char *to;
public:
	Tovar(void);
	void setotdel(char *to);
	void getotdel();
	~Tovar(void);
};