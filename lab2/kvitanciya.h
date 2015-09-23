#pragma once
#include "chek.h"
class Kvitanciya :
	public Chek
{
	char *to;
public:
	Kvitanciya(void);
	void setto(char *to);
	void getto();
	~Kvitanciya(void);
};