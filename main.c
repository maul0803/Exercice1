#include "main.h"
//----------------------------------------------------------------------------------------------//
//Main
//----------------------------------------------------------------------------------------------//
int main(void)
{
	struct ListeLogements ListeLogements;
	int nbrLignes,compteurTableau;
	float moyenne,valeur;
	int compteurRandom,nbrCriteres,k,compteurAffichage;
	printf("Entrer le nombre de lignes à afficher, au plus 7917: ");
	scanf("\n%d",&nbrLignes);
	lecture(&(ListeLogements));
	
	printf("Voulez vous randomiser vos données\n 1 pour randomiser\n 2 pour ne pas randomiser\n");
	scanf("\n%d",&compteurRandom);
	if (compteurRandom==1)
	{
		Random(&(ListeLogements),nbrLignes);
	}
	
	printf("Entrer le nombre de critères à comparer: ");
	scanf("\n%d",&nbrCriteres);
	
	
	InitialisationProcedureDistance(&(ListeLogements),nbrLignes);
	for (k=1;k<nbrCriteres+1;k++)
	{
		printf("Entrer le critère %d recherché\n1 pour id \n2 pour accomodates \n3 pour bedrooms \n4 pour bathrooms \n5 pour beds \n6 pour price \n7 pour minimumNights \n8 pour maximumNights \n9 pour numberOfReviews\n",k);
		scanf("\n%d",&compteurTableau);
		
		printf("Entrer la valeur du critère %d recherché: ",k);	
		scanf("\n%f",&valeur);
		
		ProcedureDistance(&(ListeLogements),valeur,nbrLignes,compteurTableau);
	}
	
	
	Tri(&(ListeLogements),nbrLignes);
	moyenne=FonctionMoyenne(&(ListeLogements),nbrLignes);
	
	printf("La moyenne du prix des logements par rapport au critère recherché est:%f\n",moyenne);
	
	printf("Si vous voulez afficher une donnée taper 1 sinon taper 2: ");
	scanf("\n%d",&compteurAffichage);
	if (compteurAffichage==1)
	{
		printf("Entrer le critère que vous voulez afficher\n1 pour id \n2 pour accomodates \n3 pour bedrooms \n4 pour bathrooms \n5 pour beds \n6 pour price \n7 pour minimumNights \n8 pour maximumNights \n9 pour numberOfReviews\n");
		scanf("\n%d",&compteurTableau);
		affichage(&(ListeLogements),nbrLignes,compteurTableau);
	}
	return 0;
}
