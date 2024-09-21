
#include "Stinky.h"

struct

{
	int nref;
	float vin;
	float pression;
	float precision;
} entree;



struct pistes {

	char nom1[40];
	int trajet;
};

struct pistes pistes[5];

struct forces forces[5];

struct faibles {

	char norm3[40];
	int noperte;
	int nopertea;
	int noperteb;
	float perte;
};



struct conduites {

	char rue[40];
	int cond_no;
	int jonction_a;
	int jonction_b;
	float longeur;
	float diametre;
	float chezy;

};


struct conduites conduite[200];

char numstr[40];