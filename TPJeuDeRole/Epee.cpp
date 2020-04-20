#include "Epee.h"

using namespace std;





Epee::Epee() :Arme()
{
	


}






void Epee::Attaque()
{
	
	cout << "Attaque Epee " << endl;
	cout <<"Longueur de l'epee :  "<< longueur << endl;
	Arme::Attaque();
}


Epee::Epee(std::string nom, int degats, double longueur):Arme(nom, degats)
{

	this->longueur = longueur;
}
