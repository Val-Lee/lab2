#include "StdAfx.h"
#include "kvitanciya.h"
#include <iostream>
using namespace std;
Kvitanciya::Kvitanciya(void)
{
	cout<<"���������� ����������� ���������"<<endl;
}
void Kvitanciya::setto(char *to)
{
	this->to=to;
}
void Kvitanciya::getto()
{
	cout<<"���������� ���������: "<<this->to<<endl;
}
Kvitanciya::~Kvitanciya(void)
{
	cout<<"���������� ���������� ���������"<<endl;
}