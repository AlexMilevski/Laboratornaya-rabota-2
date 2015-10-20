#include "StdAfx.h"
#include "tovar.h"
#include <iostream>
using namespace std;
Tovar::Tovar(void)
{
	cout<<"вызывается конструктор товара"<<endl;
}
void Tovar::setotdel(char *to)
{
	this->to=to;
}
void Tovar::getotdel()
{
	cout<<"отдел товара: "<<this->to<<endl;
}
Tovar::~Tovar(void)
{
	cout<<"вызывается деструктор товара"<<endl;
}