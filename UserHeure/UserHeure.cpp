// UserHeure.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "Heure.h"
#include "Date.h"
using namespace std;
using namespace Hour;
using namespace child;

int main()
{
    cout << "\n ---------------Hello World!----------- \n";
    Heure H1(13, 5, 0);
    Heure H2(13, 9, 8);
    H1.print();
    cout << "\n";
    if (H1 > H2) {
        H1.print(); cout << "est tardive que:"; H2.print();
    }
    else      
        H2.print(); cout << "est tardive que:"; H1.print();
    Date* D1 = new Date(13, 0, 0, 06, 11, 2021);
    Date* D2 = new Date(13, 0, 0, 7, 11, 2021);

    D1->print();
    if (D1 > D2)
    {
        D1->print(); cout << "est tardive que: "; D2->print();
    }
    else
    {
        D2->print(); cout << "est tardive que: "; D1->print();
    }
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
