#include "pch.h"

/*==============================================================================*/

Objet2D::Objet2D(void)
{
	std::cout << "Constructeur vide Objet2D";
	this->ini_obj(4, 5);
}

Objet2D::Objet2D(int dim1, int dim2)
{
	this->ini_obj(dim1, dim2);
}

void Objet2D::ini_obj(int dim1, int dim2)
{
	if (dim1 < dim2)
	{
		this->dim1 = dim2;
		this->dim2 = dim1;
	}
	else
	{
		this->dim1 = dim1;
		this->dim2 = dim2;
	}
}

/*==============================================================================*/

Rectangle::Rectangle(void) : Objet2D()
{
	//std::cout << "Constructeur vide Rectangle";
}

Rectangle::Rectangle(int dim1, int dim2) : Objet2D(dim1, dim2)
{

}

int Rectangle::getLongueur()
{
	return dim1;
}

int Rectangle::getLargeur()
{
	return dim2;
}

int Rectangle::getPerimetre()
{
	return (dim1 * 2) + (dim2 * 2);
}

int Rectangle::getAire()
{
	return dim1 * dim2;
}

std::string Rectangle::afficherInfo()
{
	std::string infos;
	infos += "====================================\n";
	infos += "Longueur : ";
	infos += std::to_string(this->getLongueur());
	infos += "\n";

	infos += "Largeur : ";
	infos += std::to_string(this->getLargeur());
	infos += "\n";

	infos += "Perimetre : ";
	infos += std::to_string(this->getPerimetre());
	infos += "\n";

	infos += "Aire : ";
	infos += std::to_string(this->getAire());
	infos += "\n";
	infos += "====================================\n";
	return infos;
}

/*==============================================================================*/

Carre::Carre(void) : Rectangle()
{
	std::cout << "Constructeur vide Carre";
}

Carre::Carre(int tcote) : Rectangle(tcote, tcote)
{

}

int Carre::getCote()
{
	return dim1;
}

int Carre::getPerimetre()
{
	return getCote() * 4;
}

int Carre::getAire()
{
	return getCote() * getCote();
}

std::string Carre::afficherInfo()
{
	std::string infos;

	infos += "====================================\n";
	infos += "Cote : ";
	infos += std::to_string(this->getCote());
	infos += "\n";

	infos += "Perimetre : ";
	infos += std::to_string(this->getPerimetre());
	infos += "\n";

	infos += "Aire : ";
	infos += std::to_string(this->getAire());
	infos += "\n";
	infos += "====================================\n";
	return infos;
}