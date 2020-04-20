#include "Arme.h"



using namespace std;


Arme::Arme()
{

}

Arme::Arme(std::string nom, int degats) 
{

	this->nom = nom;
	this->degats = degats;


}

void Arme::Attaque()
{

	cout <<"Nom : " << nom  << endl;
	cout <<"Degats : " << degats << endl;
}