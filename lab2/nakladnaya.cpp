#include "StdAfx.h"
#include "nakladnaya.h"
#include <iostream>
using namespace std;
Nakladnaya::Nakladnaya(void)
{
	cout<<"вызывается конструктор накладной"<<endl;
}
void Nakladnaya::setsum(int sum)
{
	this->sum=sum;
}
void Nakladnaya::getsum()
{
	cout<<"сумма накладной: "<<this->sum<<endl;
}
Nakladnaya::~Nakladnaya(void)
{
	cout<<"вызывается деструктор накладной"<<endl;
}