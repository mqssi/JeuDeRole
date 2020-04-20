#include <iostream>
#include <cstdlib>
#include <ctime>
#include "windows.h"
#include "Arme.h"
#include "EtreVivant.h"
#include "Epee.h"
#include "Heros.h"
#include"Gourdin.h"
#include"Monstre.h"


using namespace std;



int main()
{
	Epee* sword = new Epee("Moonlight Greatsword", 545, 60);
	Heros* Hercule = new Heros("Wolf Knight", 100, sword);
	Gourdin* gourdin = new Gourdin("Executioner's cudgel", 50, 20);
	Monstre* Godzilla = new Monstre("Gwyn, Lord of Cinder", 150, gourdin);

	Hercule->SePositionner(10, 20);
	Godzilla->SePositionner(12, 22);


	Hercule->Attaquer(Godzilla);
	Godzilla->Attaquer(Hercule);


			

	return 0;
}