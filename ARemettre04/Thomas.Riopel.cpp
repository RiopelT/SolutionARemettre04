 // But : Écrire une fonction qui permet de calculer la moyenne des notes entrées par l’utilisateur
// Auteur : Thomas Riopel
// Date : 2021-10-03

#include <iostream>
#include "Thomas.Riopel1.h"
using namespace std;
int main()
{
   setlocale(LC_ALL, "");
   // Déclaration des variables :
   double nb_note;
   int jour;
   int mois;
   int annee;
   int hauteur;
   int largeur;
   char remplissage;



   cout << "Veuillez entrer le nombre d'élèves que vous avez : " << endl;
   cin >> nb_note;
   calculermoyenne(nb_note);

   system("pause");
   system("cls");

   cout << "Veuillez entrer un jour : ";
   cin >> jour;
   cout << "Veuillez entrer un mois : ";
   cin >> mois;
   cout << "Veuillez entrer l'année : ";
   cin >> annee;

   while (validerDate(jour, mois, annee) == 0)   
   {
      system("cls");
      cout << " Vous n'avez pas entrer une date valide!" << endl;
      cout << "Veuillez entrer un jour : ";
      cin >> jour;
      cout << "Veuillez entrer un mois : ";
      cin >> mois;
      cout << "Veuillez entrer l'année : ";
      cin >> annee;
   }
   cout << "Bravo, vous savez entrer une date ! (" << jour << "," << mois << "," << annee << ")" << endl;


   system("pause");
   system("cls");






   system("pause");
   return 0;
}

