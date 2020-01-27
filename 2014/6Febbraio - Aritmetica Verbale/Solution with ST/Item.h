/*
 * Item.h
 *
 *  Created on: 24 gen 2020
 *      Author: lorenzo
 */

#ifndef ITEM_H_
#define ITEM_H_

#include "ST.h"

typedef char *Set;

typedef struct item{
	char *string1, *string2, *result;
	ST st;
	char *vet;

}*Item;

Item ITEMinit(int maxl, int maxs);
void SOLgen(Item item);
void STRINGset(Set dest,char *string);
int STRINGconv(char *string, ST st,int max,int *sol);
int SOLcheck(Item item, int *sol);

#endif /* ITEM_H_ */
