#pragma once
#include "kvitanciya.h"
class Document :
	public Kvitanciya
{
	char *from;
public:
	Document(void);
	void setfrom(char *from);
	void getfrom();
	~Document(void);
};