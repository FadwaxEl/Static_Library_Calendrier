#pragma once
#include "Heure.h"
using namespace Hour;
namespace child {
	class Date : public Heure
	{
	private:
		int jour;
		int mois;
		int annee;
	public:
		Date(int, int, int, int, int, int);
		bool verifBasique(int, int, int);
		bool operator>( Date&);
		bool bissextille(int);
		int nbr_jour_mois(int, int);
		void print();



	};
};
