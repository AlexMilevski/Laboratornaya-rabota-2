#include "stdafx.h"
#include "prodykt.h"
#include "tovar.h"
#include "chasy.h"
#include "cvety.h"
#include "konfety.h"
#include "tort.h"
#include "locale"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL,"rus");
	Prodykt a;
	a.setnumber(322);
	a.getnumber();
	cout<<endl;
	Tovar b;
	b.setnumber(522);
	b.getnumber();
	b.setotdel("Отдел продуктов");
	b.getotdel();
	b.setotdel("Отдел подарков");
	b.getotdel();
	b.setotdel("Отдел одежды");
	b.getotdel();
	cout<<endl;
	Chasy c;
	c.setnumber(505);
	c.getnumber();
	c.set1(12);
	c.get1();
	c.set1(24);
	c.get1();
	cout<<endl;
	Cvety d;
	d.setnumber(325);
	d.getnumber();
	d.set2("Испания");
	d.get2();
	d.set2("Италия");
	d.get2();
	d.set2("Россия");
	d.get2();
	cout<<endl;
	Tort i;
	i.setnumber(60);
	i.getnumber();
	i.set4(50);
	i.get4();
	cout << endl;
	Konfety f;
	f.setnumber(2048);
	f.getnumber();
	f.set3(10);
	f.get3();
	f.set3(20);
	f.get3();
	f.set3(30);
	f.get3();
	cout << endl;
	return 0;
}