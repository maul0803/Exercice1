#include "main.h"
//----------------------------------------------------------------------------------------------//
//Random
//----------------------------------------------------------------------------------------------//
void Random(struct ListeLogements *pointeurListeLogements,int nbrLignes)
{
//Création d'une listes d'indices allant de 0 à nbrLignes-1 de manière aléatoire
//----------------------------------------------------------------------------------------------//
	int tableauIndice[7917];
	int i;
	int temporaire;
	for (i=0;i<7917;i++)
	{
		tableauIndice[i]=i;
	}
	srand (time(NULL));//car 1 valeur à chaque secondes
	for (int i=7917;i>=0;i--)
	{
		int j = rand() % (i+1); 	
		temporaire=tableauIndice[i];
		tableauIndice[i]=tableauIndice[j];
		tableauIndice[j]=temporaire;
	}
//----------------------------------------------------------------------------------------------//
	char LogementAleaX[nbrLignes][10];
	char LogementAleaaccomodates[nbrLignes][10];
	char LogementAleabedrooms[nbrLignes][10];
	char LogementAleabathrooms[nbrLignes][10];
	char LogementAleabeds[nbrLignes][10];
	char LogementAleaprice[nbrLignes][10];
	char LogementAleaminimumNights[nbrLignes][10];
	char LogementAleamaximumNights[nbrLignes][10];
	char LogementAleanumberOfReviews[nbrLignes][10];
	for (i=0;i<nbrLignes;i++)
	{
		sprintf(LogementAleaX[i],"%s",(*pointeurListeLogements).logement[i].X);
		sprintf(LogementAleaaccomodates[i],"%s",(*pointeurListeLogements).logement[i].accomodates);
		sprintf(LogementAleabedrooms[i],"%s",(*pointeurListeLogements).logement[i].bedrooms);
		sprintf(LogementAleabathrooms[i],"%s",(*pointeurListeLogements).logement[i].bathrooms);
		sprintf(LogementAleabeds[i],"%s",(*pointeurListeLogements).logement[i].beds);
		sprintf(LogementAleaprice[i],"%s",(*pointeurListeLogements).logement[i].price);
		sprintf(LogementAleaminimumNights[i],"%s",(*pointeurListeLogements).logement[i].minimumNights);
		sprintf(LogementAleamaximumNights[i],"%s",(*pointeurListeLogements).logement[i].maximumNights);
		sprintf(LogementAleanumberOfReviews[i],"%s",(*pointeurListeLogements).logement[i].numberOfReviews);
	}
	for (i=0;i<nbrLignes;i++)
	{
		sprintf((*pointeurListeLogements).logement[i].X,"%s",LogementAleaX[i]);
		sprintf((*pointeurListeLogements).logement[i].accomodates,"%s",LogementAleaaccomodates[i]);
		sprintf((*pointeurListeLogements).logement[i].bedrooms,"%s",LogementAleabedrooms[i]);
		sprintf((*pointeurListeLogements).logement[i].bathrooms,"%s",LogementAleabathrooms[i]);
		sprintf((*pointeurListeLogements).logement[i].beds,"%s",LogementAleabeds[i]);
		sprintf((*pointeurListeLogements).logement[i].price,"%s",LogementAleaprice[i]);
		sprintf((*pointeurListeLogements).logement[i].minimumNights,"%s",LogementAleaminimumNights[i]);
		sprintf((*pointeurListeLogements).logement[i].maximumNights,"%s",LogementAleamaximumNights[i]);
		sprintf((*pointeurListeLogements).logement[i].numberOfReviews,"%s",LogementAleanumberOfReviews[i]);
	}	
}
