#pragma once

#include <iostream>
#include <string>
#include "EtreVivant.h"
#include "Arme.h"


#ifndef MONSTRE_H_INCLUDED
#define MONSTRE_H_INCLUDED


class Monstre : public EtreVivant
{

private:

	Arme* arme;

public:
	Monstre();
	Monstre(std::string nom, int pointdevie, Arme* arme);
	void Attaquer(EtreVivant* attaquee);

};

#endif
