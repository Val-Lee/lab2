#include "StdAfx.h"
#include "document.h"
#include <iostream>
using namespace std;
Document::Document(void)
{
	cout<<"���������� ����������� ���������"<<endl;
}
void Document::setfrom(char *from)
{
	this->from=from;
}
void Document::getfrom()
{
	cout<<"����������� ���������: "<<this->from<<endl;
}
Document::~Document(void)
{
	cout<<"���������� ���������� ���������"<<endl;
}