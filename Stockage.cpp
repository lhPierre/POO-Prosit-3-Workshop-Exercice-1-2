#include "pch.h"

Stockage::Stockage(int nb_elements_liste)
{
	this->nb_elements_liste = nb_elements_liste;
	this->index_liste = 0;

	this->liste = new Objet2D*[nb_elements_liste];
}

void Stockage::ajouterObjet(Objet2D* obj)
{
	this->liste[this->index_liste] = obj;

	this->index_liste++;
}

void Stockage::ajouterObjet(Objet2D* obj, int index) 
{
	this->liste[index] = obj;
}
void Stockage::afficherInfos()
{
	for (int i = 0; i < nb_elements_liste; i++)
	{
		std::cout << this->liste[i]->afficherInfo() << std::endl;
	}
}