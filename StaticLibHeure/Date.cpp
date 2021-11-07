#include "pch.h"
#include "Date.h"
#include <iostream>
#include "assert.h"
using namespace std;
using namespace child;
using namespace Hour;
child::Date::Date(int h, int m , int s, int j, int mo, int a):Heure(h,m,s)
{
	assert(verifBasique(j, mo, a));
	this->jour = j;
	this->mois = mo;
	this->annee = a;

}

bool child::Date::verifBasique(int j, int m, int a)
{
	return ((j > 0 && j <= nbr_jour_mois(m, a)) && (m > 0 && m < 13) && (a > 1999 && a < 2999));
}

bool child::Date::operator>( Date& d)
{
	if (this->annee != d.annee)
			return(this->annee > d.annee);
		if (this->mois != d.mois)
			return (this->mois > d.mois);
		if (this->jour != d.jour)
			return (this->jour > d.jour);
		return this->Heure::operator>(d);

	
}

bool child::Date::bissextille(int a)
{
	return((a % 4 == 0) && ((a % 100 != 0) || (a % 400 == 0)));
}

int child::Date::nbr_jour_mois(int m, int a)
{
	if (bissextille(a) && m == 2)
		return 29;
	return 28;
	if ((m % 2 == 0 && m > 7) || (m % 2 != 1 && m <= 7))
		return 31;
	return 30;
}

void child::Date::print()
{
	Heure::print();
	cout << this->jour << "/" << this->mois << "/" << this->annee << endl;
}
