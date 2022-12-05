#include "main.h"
//----------------------------------------------------------------------------------------------//
//Fonction Distance
//----------------------------------------------------------------------------------------------//
void ProcedureDistance(struct ListeLogements *pointeurListeLogements,float valeur,int nbrLignes,int compteurTableau)//procédure qui place la distance de ce que l'on cherche par rapport à la colonnes correspondante (compteurTableau)
{
	int i=0;
	float distanceValeur;
	if (compteurTableau==1)//X
		for (i=0;i<nbrLignes;i++)
		{
			distanceValeur=abs(valeur-atof((*pointeurListeLogements).logement[i].X));
			(*pointeurListeLogements).logement[i].distance=(*pointeurListeLogements).logement[i].distance+distanceValeur;
		}
	else if (compteurTableau==2)
		for (i=0;i<nbrLignes;i++)//accomodates
		{
			distanceValeur=abs(valeur-atof((*pointeurListeLogements).logement[i].accomodates));
			(*pointeurListeLogements).logement[i].distance=(*pointeurListeLogements).logement[i].distance+distanceValeur;
		}	
	else if (compteurTableau==3)//bedrooms
		for (i=0;i<nbrLignes;i++)
		{
			distanceValeur=abs(valeur-atof((*pointeurListeLogements).logement[i].bedrooms));
			(*pointeurListeLogements).logement[i].distance=(*pointeurListeLogements).logement[i].distance+distanceValeur;
		}	
	else if (compteurTableau==4)//bathrooms
		for (i=0;i<nbrLignes;i++)
		{
			distanceValeur=abs(valeur-atof((*pointeurListeLogements).logement[i].bathrooms));
			(*pointeurListeLogements).logement[i].distance=(*pointeurListeLogements).logement[i].distance+distanceValeur;
		}	
	else if (compteurTableau==5)//beds
		for (i=0;i<nbrLignes;i++)
		{
			distanceValeur=abs(valeur-atof((*pointeurListeLogements).logement[i].beds));
			(*pointeurListeLogements).logement[i].distance=(*pointeurListeLogements).logement[i].distance+distanceValeur;
		}	
	else if (compteurTableau==6)//price
		for (i=0;i<nbrLignes;i++)
		{
			distanceValeur=abs(valeur-atof((*pointeurListeLogements).logement[i].price));
			(*pointeurListeLogements).logement[i].distance=(*pointeurListeLogements).logement[i].distance+distanceValeur;
		}	
	else if (compteurTableau==7)//minimumNights
		for (i=0;i<nbrLignes;i++)
		{
			distanceValeur=abs(valeur-atof((*pointeurListeLogements).logement[i].minimumNights));
			(*pointeurListeLogements).logement[i].distance=(*pointeurListeLogements).logement[i].distance+distanceValeur;
		}	
	else if (compteurTableau==8)//maximumNights
		for (i=0;i<nbrLignes;i++)
		{
			distanceValeur=abs(valeur-atof((*pointeurListeLogements).logement[i].maximumNights));
			(*pointeurListeLogements).logement[i].distance=(*pointeurListeLogements).logement[i].distance+distanceValeur;
		}	
	else if (compteurTableau==9)//numberOfReviews
		for (i=0;i<nbrLignes;i++)
		{
			distanceValeur=abs(valeur-atof((*pointeurListeLogements).logement[i].numberOfReviews));
			(*pointeurListeLogements).logement[i].distance=(*pointeurListeLogements).logement[i].distance+distanceValeur;
		}
}
