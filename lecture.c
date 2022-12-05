#include "main.h"
//----------------------------------------------------------------------------------------------//
//Procédure lecture
//----------------------------------------------------------------------------------------------//
void lecture(struct ListeLogements *pointeurListeLogements)	
{
	int compteurLigne=0;
	int compteurTableau=0;
	FILE* fichier;
	fichier=fopen("/data/Documents/Cours/Informatique/Programmation_Procédurale/DM/Rendre/Exercice1/airbnb_donnees_propre.csv","r");
	char ligne[100];//Contient une ligne de fichier, on considère qu'il y a au plus 100 caractères
	fgets(ligne,100,fichier);//On ne prend pas en compte la première ligne du fichier|caractere contient une ligne du fichier
	while ((fgets(ligne,100, fichier))!=NULL)
	{				
		char * donnee=strtok(ligne,",");//Contient une donnée d'un tableau
		
		while (donnee!=NULL)//Tant que l'on a pas regardé tous les caractères de ligne
		{
			compteurTableau++;
//----------------------------------------------------------------------------------------------//
			if (compteurTableau==1)//X
			{
				sprintf((*pointeurListeLogements).logement[compteurLigne].X,"%s",donnee);
			}
			else if (compteurTableau==2)//accomodates
			{
				sprintf((*pointeurListeLogements).logement[compteurLigne].accomodates,"%s",donnee);			
			}
			else if (compteurTableau==3)//bedrooms
			{
				sprintf((*pointeurListeLogements).logement[compteurLigne].bedrooms,"%s",donnee);			
			}
			else if (compteurTableau==4)//bathrooms
			{
				sprintf((*pointeurListeLogements).logement[compteurLigne].bathrooms,"%s",donnee);
				
			}		
			else if (compteurTableau==5)//beds
			{
				sprintf((*pointeurListeLogements).logement[compteurLigne].beds,"%s",donnee);			
			}		
			else if (compteurTableau==6)//price
			{
				sprintf((*pointeurListeLogements).logement[compteurLigne].price,"%s",donnee);
			}		
			else if (compteurTableau==7)//minimumNights
			{
				sprintf((*pointeurListeLogements).logement[compteurLigne].minimumNights,"%s",donnee);		
			}		
			else if (compteurTableau==8)//maximumNights
			{
				sprintf((*pointeurListeLogements).logement[compteurLigne].maximumNights,"%s",donnee);		
			}		
			else if (compteurTableau==9)//numberOfReviews
			{
				sprintf((*pointeurListeLogements).logement[compteurLigne].numberOfReviews,"%s",donnee);	
			}
			donnee=strtok(NULL,",");
//----------------------------------------------------------------------------------------------//
		}
		compteurLigne++;
		compteurTableau=0;
	}
}
