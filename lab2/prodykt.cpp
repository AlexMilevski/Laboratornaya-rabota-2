#include "StdAfx.h"
#include "prodykt.h"
#include <iostream>
using namespace std;
Prodykt::Prodykt(void)
{
cout<<"���������� ����������� �������� "<<endl;
}
void Prodykt::setnumber(int number)
{
this->number=number;
}
void Prodykt::getnumber()
{
cout<<"����� ��������: "<<this->number<<endl;
}
Prodykt::~Prodykt(void)
{
cout<<"���������� ���������� ��������"<<endl;
}