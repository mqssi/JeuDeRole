#include "EtreVivant.h"

using namespace std;


EtreVivant::EtreVivant() 
{


	this->nom = "";
	this->pointdevie = 0;

}



EtreVivant::EtreVivant(std::string nom, int pointdevie)
{

	this->nom = nom;
	this->pointdevie = pointdevie;
	this->positionx = 0;
	this->positiony = 0;


}


void EtreVivant::SePositionner(int positionx, int positiony)
{
	this->positionx= positionx ;
	this->positiony = positiony;

}


void EtreVivant::Attaquer(EtreVivant* Etrevivantcible)
{

	cout << "Nom attaquant : " << this->nom << endl <<  "Nom Cible : " << Etrevivantcible->nom << endl;
	Etrevivantcible->Recevoirdegats(this);
}

void EtreVivant::Recevoirdegats(EtreVivant* Etrevivantsource)
{

	cout << this->nom << " est attaque par " << Etrevivantsource->nom << endl;

	
}