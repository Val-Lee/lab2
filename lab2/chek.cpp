#include "StdAfx.h"
#include "chek.h"
#include <iostream>
using namespace std;
Chek::Chek(void)
{
cout<<"вызывается конструктор чека "<<endl;
}
void Chek::setnumber(int number)
{
this->number=number;
}
void Chek::getnumber()
{
cout<<"номер чека: "<<this->number<<endl;
}
Chek::~Chek(void)
{
cout<<"вызывается деструктор чека"<<endl;
}