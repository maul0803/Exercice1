#include "main.h"
//----------------------------------------------------------------------------------------------//
//Moyenne du prix
//----------------------------------------------------------------------------------------------//
float FonctionMoyenne(struct ListeLogements *pointeurListeLogements,int nbrLignes)
{
	int i;
	float moyenne;
	int somme=0;
	for (i=0;i<nbrLignes;i++)
	{
		somme=somme+atof((*pointeurListeLogements).logement[i].price);
	}
	moyenne=somme/nbrLignes;
	return moyenne;
}
//----------------------------------------------------------------------------------------------//
