#pragma once
#include "document.h"
class Nakladnaya :
	public Document
{
	int sum;
public:
	Nakladnaya(void);
	void setsum (int x);
	void getsum();
	~Nakladnaya(void);
};