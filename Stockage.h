#pragma once
#include "pch.h"

class Stockage
{
private:
	int index_liste;
	int nb_elements_liste;
	Objet2D* *liste;

public:
	Stockage(int);
	void ajouterObjet(Objet2D*);
	void ajouterObjet(Objet2D*, int);
	void afficherInfos();
};
