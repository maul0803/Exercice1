#include "main.h"
//Permet d'initialiser la structures logement.distance en mettant que des 0
//----------------------------------------------------------------------------------------------//
void InitialisationProcedureDistance(struct ListeLogements *pointeurListeLogements,int nbrLignes)
{
	int k;
	for (k=0;k<nbrLignes;k++)
	{
		(*pointeurListeLogements).logement[k].distance=0;
	}
}
//----------------------------------------------------------------------------------------------//
//Affichage
void affichage(struct ListeLogements *pointeurListeLogements,int nbrLignes,int compteurTableau)
{
	int i;
	int sortie;
	if (compteurTableau==1)
	{
		printf("id\n");
		for (i=0;i<nbrLignes;i++)
		{
			printf("%s\n",(*pointeurListeLogements).logement[i].X);
		}
	}
	if (compteurTableau==2)
	{
		printf("accomodates\n");
		for (i=0;i<nbrLignes;i++)
		{
			printf("%s\n",(*pointeurListeLogements).logement[i].accomodates);
		}
	}
	if (compteurTableau==3)
	{
		printf("bedrooms\n");
		for (i=0;i<nbrLignes;i++)
		{
			printf("%s\n",(*pointeurListeLogements).logement[i].bedrooms);
		}
	}
	if (compteurTableau==4)
	{
		printf("bathrooms\n");
		for (i=0;i<nbrLignes;i++)
		{
			printf("%s\n",(*pointeurListeLogements).logement[i].bathrooms);
		}
	}
	if (compteurTableau==5)
	{
		printf("beds\n");
		for (i=0;i<nbrLignes;i++)
		{
			printf("%s\n",(*pointeurListeLogements).logement[i].beds);
		}
	}
	if (compteurTableau==6)
	{
		printf("price\n");
		for (i=0;i<nbrLignes;i++)
		{
			printf("%s\n",(*pointeurListeLogements).logement[i].price);
		}
	}
	if (compteurTableau==7)
	{
		printf("minimumNights\n");
		for (i=0;i<nbrLignes;i++)
		{
			printf("%s\n",(*pointeurListeLogements).logement[i].minimumNights);
		}
	}
	if (compteurTableau==8)
	{
		printf("maximumNights\n");
		for (i=0;i<nbrLignes;i++)
		{
			printf("%s\n",(*pointeurListeLogements).logement[i].maximumNights);
		}
	}
	if (compteurTableau==9)
	{
		printf("numberOfReviews\n");
		for (i=0;i<nbrLignes;i++)
		{
			printf("%s",(*pointeurListeLogements).logement[i].numberOfReviews);
		}
	}
	printf("Pour afficher une autre donnée taper 1, sinon taper 2: ");
	scanf("\n%d",&sortie);
	if (sortie==1)
	{
		printf("Entrer le critère que vous voulez afficher\n1 pour id \n2 pour accomodates \n3 pour bedrooms \n4 pour bathrooms \n5 pour beds \n6 pour price \n7 pour minimumNights \n8 pour maximumNights \n9 pour numberOfReviews\n");
		scanf("\n%d",&compteurTableau);
		affichage(&(*pointeurListeLogements),nbrLignes,compteurTableau);
	}
}
