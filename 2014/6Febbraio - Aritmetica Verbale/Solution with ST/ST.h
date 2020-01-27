/*
 * ST.h
 *
 *  Created on: 24 gen 2020
 *      Author: lorenzo
 */

#ifndef ST_H_
#define ST_H_

typedef struct hashtable *ST;

ST   STinit(int maxN);
void STfree(ST ht);
void STinsert(ST ht, char str, int index);
int  STsearch(ST ht, char str);
int STgetN(ST st);
#endif /* ST_H_ */
