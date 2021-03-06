#ifndef ST_H
#define ST_H

#include "string.h"

typedef struct hashtable *ST;

ST STinit(int max);
void STfree(ST table);
int getN(ST table);
int STsearchbyname(ST table, char *x);
void STprint(ST table);
int STinsert(ST table, char *x);
char *STgetbyindex(ST table, int index);
#endif
