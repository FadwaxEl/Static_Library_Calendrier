#pragma once
namespace Hour {
	class Heure
	{
	protected:
		int heure;
		int minute;
		int seconde;
	public:
		Heure(int h , int m , int s );
		Heure(const Heure&);
		void print();
		bool operator>(Heure& H);


	};
};

