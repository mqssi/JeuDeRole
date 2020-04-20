#pragma once

#include <iostream>
#include <string>
#include "EtreVivant.h"
#include "Arme.h"


#ifndef HEROS_H_INCLUDED
#define HEROS_H_INCLUDED


class Heros : public EtreVivant
{

private:

	Arme* arme;

public:
	Heros();
	Heros(std::string nom, int pointdevie, Arme* arme);
	void Attaquer(EtreVivant* attaquee);

};

#endif