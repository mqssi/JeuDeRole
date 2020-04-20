#include "Gourdin.h"
using namespace std;


Gourdin::Gourdin():Arme()
{
	

}


void Gourdin::Attaque()
{
	
	cout << "Attaque Gourdin " << endl;
	cout << "Poids du gourdin :  " << poids << endl;
	Arme::Attaque();
}

Gourdin::Gourdin(std::string nom, int degats, double poids) :Arme(nom, degats)
{

	this->poids = poids;
}