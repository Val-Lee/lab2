#include "StdAfx.h"
#include "chek.h"
#include <iostream>
using namespace std;
Chek::Chek(void)
{
cout<<"���������� ����������� ���� "<<endl;
}
void Chek::setnumber(int number)
{
this->number=number;
}
void Chek::getnumber()
{
cout<<"����� ����: "<<this->number<<endl;
}
Chek::~Chek(void)
{
cout<<"���������� ���������� ����"<<endl;
}