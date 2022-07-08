/******************************************************************************
 * Copyright (C) 2017 by Ross Fezeu
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software.
 *
 *****************************************************************************/
/**
 * @file <stats.h>
 * @brief <this file regroups or implements the different declarations of the functions used by our project >
 *
 * <Add Extended Description Here>
 *
 * @author <Armand Fonkou>
 * @date < 30/05/2022 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
/* Size of the Data Set */
#define SIZE (40)

/* Add Your Declarations and Function Comments here */


  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
void affiche(double *tab, int nb); // this function allows the user to print the contents of the table
double calculer_moyenne (double *tab, int nb); // this function returns us the average of the array of data
void find_min_max (double *tab, int nb, double *pmin, double *pmax), //this function returns us the maximum and minimum of the data array



#endif /* __STATS_H__ */
