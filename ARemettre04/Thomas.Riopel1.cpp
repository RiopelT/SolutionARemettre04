
#include <iostream>
using namespace std;


int calculermoyenne(int compteur)
{
   
	
	float note;
	float resultat = 0;

	
	for (int i = 1; i <= compteur; i++)
	{
		cout << "Veuillez enter la note " << i << " : ";
		cin >> note;
		resultat = resultat + note;
	}

	resultat = resultat / compteur;
	cout << " La moyenne de ce groupe est : " << resultat <<endl;

	return resultat;
}

bool validerDate(int jour, int mois, int annee)
{
	
		bool validation = true;
		
		if (!(jour > 0 && jour < 32 && mois > 0 && mois < 13))
		{
			
			validation = false;
		}
		return validation;
	

}
