/******************************************************************************
 * Copyright (C) 2017 by Ross Fezeu
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software.
 *****************************************************************************/
/**
 * @file <stats.h>
 * @brief < this file regroups or implements the different functions that our project >

 * @author <Armand Fonkou>
 * @date < 30/05/2022 >
 */

#include <stdio.h>
#include "stats.h"


/* Add other Implementation File Code Here */

void affiche(double *tab, int nb)
{
	int i;
	printf("\n");
	for (i=0; i<nb; i++)
	{
		printf ("tab[%d] = %f\n", i, tab[i]);
	}
	printf("\n");
	return;
}

double calculer_moyenne (double *tab, int nb)

{
	double moyen, somme;
	int i;
	somme = 0;
	for (i=0; i<nb; i++)
	{
		somme = somme + tab[i];
	}
	moyen = somme / nb;
	return moyen;
}

void find_min_max (double *tab, int nb, double *pmin, double *pmax)
{
	double val_min, val_max;
	int i;
	val_min = tab[0];
	val_max = tab[0];
	for (i=0; i<nb; i++)
	{
		if (tab[i] < val_min)
		{
			val_min = tab[i];
		}
		else if (tab[i] > val_max)
		{
			val_max = tab[i];
		}
	}
	*pmin = val_min;
	*pmax = val_max;
}
