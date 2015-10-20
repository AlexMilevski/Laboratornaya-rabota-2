#include "StdAfx.h"
#include "prodykt.h"
#include <iostream>
using namespace std;
Prodykt::Prodykt(void)
{
cout<<"вызывается конструктор продукта "<<endl;
}
void Prodykt::setnumber(int number)
{
this->number=number;
}
void Prodykt::getnumber()
{
cout<<"номер продукта: "<<this->number<<endl;
}
Prodykt::~Prodykt(void)
{
cout<<"вызывается деструктор продукта"<<endl;
}