#include "StdAfx.h"
#include "nakladnaya.h"
#include <iostream>
using namespace std;
Nakladnaya::Nakladnaya(void)
{
	cout<<"���������� ����������� ���������"<<endl;
}
void Nakladnaya::setsum(int sum)
{
	this->sum=sum;
}
void Nakladnaya::getsum()
{
	cout<<"����� ���������: "<<this->sum<<endl;
}
Nakladnaya::~Nakladnaya(void)
{
	cout<<"���������� ���������� ���������"<<endl;
}