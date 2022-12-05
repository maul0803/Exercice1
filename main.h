#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <time.h>//Pour la fonction temps de la procédure Random
#include <string.h>
struct Logement
{
	char X[10];//Compteur=1, colonne sans nom sur le csv
	char accomodates[10];//Compteur=2
	char bedrooms[10];//Compteur=3
	char bathrooms[10];//Compteur=4
	char beds[10];//Compteur=5
	char price[10];//Compteur=6
	char minimumNights[10];//Compteur=7
	char maximumNights[10];//Compteur=8
	char numberOfReviews[10];//Compteur=9
	float distance;//Distance du logement par rappport au critère choisi
};
struct ListeLogements
{
	struct Logement logement[7918];//Structure contennant tous les logements
};
void lecture(struct ListeLogements *pointeurListeLogements);
void ProcedureDistance(struct ListeLogements *pointeurListeLogements,float valeur,int nbrLignes,int compteurTableau);
void Random(struct ListeLogements *pointeurListeLogements,int nbrLignes);
void Tri(struct ListeLogements *pointeurListeLogements,int nbrLignes);
float FonctionMoyenne(struct ListeLogements *pointeurListeLogements,int nbrLignes);
void InitialisationProcedureDistance(struct ListeLogements *pointeurListeLogements,int nbrLignes);
void affichage(struct ListeLogements *pointeurListeLogements,int nbrLignes,int compteurTableau);
