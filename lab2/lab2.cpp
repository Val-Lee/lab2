#include "stdafx.h"
#include "chek.h"
#include "kvitanciya.h"
#include "document.h"
#include "nakladnaya.h"
#include "locale"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL,"rus");
	Chek a;
	a.setnumber(322);
	a.getnumber();
	cout<<endl;
	Kvitanciya b;
	b.setnumber(522);
	b.getnumber();
	b.setto("ÎÀÎ ''ÀÑÁ ÁÅËÀÐÓÑÁÀÍÊ''");
	b.getto();
	cout<<endl;
	Document c;
	c.setnumber(505);
	c.getnumber();
	c.setto("ÃÓÎ ÁÃÒÓ");
	c.getto();
	c.setfrom("Àëåêñàíäð Ãóñàð");
	c.getfrom();
	cout<<endl;
	Nakladnaya d;
	d.setnumber(325);
	d.getnumber();
	d.setto("Kyoto Animation");
	d.getto();
	d.setfrom("Hayao Miyazaki");
	d.getfrom();
	d.setsum(123124);
	d.getsum();
	cout<<endl;
	return 0;
}