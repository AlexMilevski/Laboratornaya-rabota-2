#include "StdAfx.h"
#include "tovar.h"
#include <iostream>
using namespace std;
Tovar::Tovar(void)
{
	cout<<"���������� ����������� ������"<<endl;
}
void Tovar::setotdel(char *to)
{
	this->to=to;
}
void Tovar::getotdel()
{
	cout<<"����� ������: "<<this->to<<endl;
}
Tovar::~Tovar(void)
{
	cout<<"���������� ���������� ������"<<endl;
}