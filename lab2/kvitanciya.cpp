#include "StdAfx.h"
#include "kvitanciya.h"
#include <iostream>
using namespace std;
Kvitanciya::Kvitanciya(void)
{
	cout<<"вызывается конструктор квитанции"<<endl;
}
void Kvitanciya::setto(char *to)
{
	this->to=to;
}
void Kvitanciya::getto()
{
	cout<<"получатель квитанции: "<<this->to<<endl;
}
Kvitanciya::~Kvitanciya(void)
{
	cout<<"вызывается деструктор квитанции"<<endl;
}