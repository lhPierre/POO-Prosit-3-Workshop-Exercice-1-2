#include "pch.h"

int main()
{
    /*
    Objet2D* p1;

    int choixutilisateur;
    int dim1;
    int dim2;
    
    std::cout << "Tapez 1 pour un rectangle ou Tapez 2 pour un carre : " << std::endl;
    std::cin >> choixutilisateur;


    if (choixutilisateur == 1)
    {
        std::cout << "Entrez la dimension 1 de votre rectangle : " << std::endl;
        std::cin >> dim1;

        std::cout << "Entrez la dimension 2 de votre rectangle : " << std::endl;
        std::cin >> dim2;

        p1 = new Rectangle(dim1, dim2);

        std::cout << p1->afficherInfo();

        delete p1;
    }
    else if (choixutilisateur == 2)
    {
        std::cout << "Entrez la dimension de votre carre : " << std::endl;
        std::cin >> dim1;

        p1 = new Carre(dim1);

        std::cout << p1->afficherInfo();

        delete p1;
    }*/
    
    Objet2D* point1;
    Objet2D* point2;
    Objet2D* point3;

    point1 = new Rectangle(25,21);
    point2 = new Rectangle(2, 1);
    point3 = new Carre(21);

    Stockage* tableau;

    tableau = new Stockage(3);

    tableau->ajouterObjet(point1);
    tableau->ajouterObjet(point2);
    tableau->ajouterObjet(point3);

    tableau->afficherInfos();
}
