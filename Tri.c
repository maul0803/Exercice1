#include "main.h"
//----------------------------------------------------------------------------------------------//
//Tri par sélection
//----------------------------------------------------------------------------------------------//
void Tri(struct ListeLogements *pointeurListeLogements,int nbrLignes)
{	
	int temporaire,i,j;
	int tableauIndices[nbrLignes];
	char LogementTriX[nbrLignes][10];
	char LogementTriaccomodates[nbrLignes][10];
	char LogementTribedrooms[nbrLignes][10];
	char LogementTribathrooms[nbrLignes][10];
	char LogementTribeds[nbrLignes][10];
	char LogementTriprice[nbrLignes][10];
	char LogementTriminimumNights[nbrLignes][10];
	char LogementTrimaximumNights[nbrLignes][10];
	char LogementTrinumberOfReviews[nbrLignes][10];
	for (i=0;i<nbrLignes;i++)
	{
		tableauIndices[i]=i;
	}
	for (i=1;i<nbrLignes;i++)
	{
		j=i; 
		while (j>0 && (*pointeurListeLogements).logement[j-1].distance>(*pointeurListeLogements).logement[j].distance)
		{
			temporaire=(*pointeurListeLogements).logement[j].distance;
			(*pointeurListeLogements).logement[j].distance=(*pointeurListeLogements).logement[j-1].distance;
			(*pointeurListeLogements).logement[j-1].distance=temporaire;
			temporaire=tableauIndices[j];
			tableauIndices[j]=tableauIndices[j-1];
			tableauIndices[j-1]=temporaire;
			j--;
		}
	}
	//On change l'ordre dant toutes les autres colonnes
	for (i=0;i<nbrLignes;i++)
	{
		sprintf(LogementTriX[i],"%s",(*pointeurListeLogements).logement[tableauIndices[i]].X);
		sprintf(LogementTriaccomodates[tableauIndices[i]],"%s",(*pointeurListeLogements).logement[tableauIndices[i]].accomodates);
		sprintf(LogementTribedrooms[tableauIndices[i]],"%s",(*pointeurListeLogements).logement[tableauIndices[i]].bedrooms);
		sprintf(LogementTribathrooms[tableauIndices[i]],"%s",(*pointeurListeLogements).logement[tableauIndices[i]].bathrooms);
		sprintf(LogementTribeds[i],"%s",(*pointeurListeLogements).logement[tableauIndices[i]].beds);
		sprintf(LogementTriprice[i],"%s",(*pointeurListeLogements).logement[tableauIndices[i]].price);
		sprintf(LogementTriminimumNights[i],"%s",(*pointeurListeLogements).logement[tableauIndices[i]].minimumNights);
		sprintf(LogementTrimaximumNights[i],"%s",(*pointeurListeLogements).logement[tableauIndices[i]].maximumNights);
		sprintf(LogementTrinumberOfReviews[i],"%s",(*pointeurListeLogements).logement[tableauIndices[i]].numberOfReviews);
	}
	for (i=0;i<nbrLignes;i++)
	{
		sprintf((*pointeurListeLogements).logement[i].X,"%s",LogementTriX[i]);
		sprintf((*pointeurListeLogements).logement[i].accomodates,"%s",LogementTriaccomodates[i]);
		sprintf((*pointeurListeLogements).logement[i].bedrooms,"%s",LogementTribedrooms[i]);
		sprintf((*pointeurListeLogements).logement[i].bathrooms,"%s",LogementTribathrooms[i]);
		sprintf((*pointeurListeLogements).logement[i].beds,"%s",LogementTribeds[i]);
		sprintf((*pointeurListeLogements).logement[i].price,"%s",LogementTriprice[i]);
		sprintf((*pointeurListeLogements).logement[i].minimumNights,"%s",LogementTriminimumNights[i]);
		sprintf((*pointeurListeLogements).logement[i].maximumNights,"%s",LogementTrimaximumNights[i]);
		sprintf((*pointeurListeLogements).logement[i].numberOfReviews,"%s",LogementTrinumberOfReviews[i]);
	}	
}
