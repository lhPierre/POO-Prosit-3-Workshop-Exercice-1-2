#pragma once

#include "pch.h"

class Objet2D
{
protected:
	int dim1; // Longueur 
	int dim2; // Largeur
	void ini_obj(int, int);
public:
	Objet2D(void);
	Objet2D(int, int);
	virtual int getPerimetre() = 0;
	virtual int getAire() = 0;
	virtual std::string afficherInfo() = 0;
};

class Rectangle : public Objet2D
{
public:
	Rectangle(void);
	Rectangle(int, int);
	int getLongueur();
	int getLargeur();
	virtual int getPerimetre();
	virtual int getAire();
	virtual std::string afficherInfo();
};

class Carre : public Rectangle
{
public:
	Carre();
	Carre(int);
	int getCote();
	int getPerimetre();
	int getAire();
	std::string afficherInfo();
};