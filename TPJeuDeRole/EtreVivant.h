#pragma once

#include <iostream>
#include <string>


#ifndef ETREVIVANT_H_INCLUDED
#define ETREVIVANT_H_INCLUDED

class EtreVivant
{
protected:
	
	std::string nom;
	int positionx;
	int positiony;
	
	int pointdevie;

public:

	EtreVivant();
	EtreVivant(std::string nom, int pointdevie);
	
	
	
	void SePositionner(int positionx, int positiony);
	
	
	 virtual void Attaquer(EtreVivant* Etrevivantcible);
	
	
	void Recevoirdegats(EtreVivant* Etrevivantsource);
	
	
	//Accesseurs
	std::string GetNom() { return this->nom; }
	void SetNom(std::string nom) { this->nom; }

	int GetPositionx() { return this->positionx; }
	void SetPositionx(int positionx) { this->positionx; }

	int GetPositiony() { return this->positiony; }
	void SetPositiony(int positiony) { this->positiony; }

	int GetPointevie() { return this->pointdevie; }
	void SetPointevie(int pointdevie) { this->pointdevie; }

};

#endif