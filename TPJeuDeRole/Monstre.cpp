#include "Monstre.h"



using namespace std;

Monstre::Monstre() : EtreVivant()
{
	


}



Monstre::Monstre(std::string nom, int pointdevie, Arme* arme)
{


	this->nom = nom;
	this->pointdevie = pointdevie;
	this->arme = arme;


}




void Monstre::Attaquer(EtreVivant* attaquee)
{
	EtreVivant::Attaquer(attaquee);
	arme->Attaque();


}