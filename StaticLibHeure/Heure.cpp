#include "pch.h"
#include "Heure.h"
#include <iostream>
using namespace std;
using namespace Hour;
Heure::Heure(int h, int m, int s)
{
	/*if (h >= 0 && h <= 23)
		this->heure = h;		
	if (m >= 0 && m <= 59)
	    this->minute = m;
	if (s >= 0 && s <= 59)
	    this->seconde = s;*/
	(h >= 0 && h <= 23) ? this->heure = h : this->heure = 0;
	(m >= 0 && m <= 59) ? this->minute = m : this->minute = 0;
	(s >= 0 && s <= 59) ? this->seconde =s : this->seconde = 0;

}

Heure::Heure(const Heure& H)
{
	this->heure = H.heure;
	this->minute = H.minute;
	this->seconde = H.seconde;
}

void Heure::print()
{
	cout << this->heure << "h:" << this->minute << "m:" << this->seconde << "s" << endl;
}

bool Heure::operator>(Heure& H)
{
	if (this->heure > H.heure) return true;
	if (this->heure == H.heure)
	{
		if (this->minute > H.minute) return true;
		if (this->seconde > H.seconde) return true;
	}
	
	return false;
	
}

