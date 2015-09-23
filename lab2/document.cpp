#include "StdAfx.h"
#include "document.h"
#include <iostream>
using namespace std;
Document::Document(void)
{
	cout<<"вызывается конструктор документа"<<endl;
}
void Document::setfrom(char *from)
{
	this->from=from;
}
void Document::getfrom()
{
	cout<<"отправитель документа: "<<this->from<<endl;
}
Document::~Document(void)
{
	cout<<"вызывается деструктор документа"<<endl;
}