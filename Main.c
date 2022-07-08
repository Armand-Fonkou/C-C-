#include <stdio.h>
#include <stdlib.h>
 
#include "stats.h";

int main ()
{
	int nb_val;
	
	printf("Nombre d\'elements ? "); scanf ("%d", &nb_val);

    double min, max,moyenne;

	affiche(test, nb_val);

	moyenne = calculer_moyenne(test, nb_val);
	printf("Moyenne = %f\n", moyenne);

	chercher_min_max(test, nb_val, &min, &max);
	printf ("Min = %f\tMax = %f\n", min, max);

	return 0;
}