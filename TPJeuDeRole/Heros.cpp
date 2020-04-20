#include "Heros.h"


using namespace std;

Heros::Heros() : EtreVivant()
{
	

}



Heros::Heros(std::string nom, int pointdevie, Arme* arme) 
{

	
	this->nom = nom;
	this->pointdevie = pointdevie;
	this->arme = arme;


}




void Heros::Attaquer(EtreVivant* attaquee) 
{
	EtreVivant::Attaquer(attaquee);
	arme->Attaque();


}