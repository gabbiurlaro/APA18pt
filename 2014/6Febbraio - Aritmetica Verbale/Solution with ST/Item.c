/*
 * Item.c
 *
 *  Created on: 24 gen 2020
 *      Author: lorenzo
 */


/*
 * Criptatore.c
 *
 *  Created on: 24 gen 2020
 *      Author: lorenzo
 */

#include <stdio.h>
#include <stdlib.h>
#include "Item.h"
#include "ST.h"
#define MAXL 10 //maximum number of different letters
#define MAXS 9 //maximum string lenght




Item ITEMinit(int maxl, int maxs){
	Item item=malloc(sizeof(*item));
	item->result=malloc(sizeof(char)*maxs);
	item->string1=malloc(sizeof(char)*maxs);
	item->string2=malloc(sizeof(char)*maxs);
	item->st=STinit(maxl);
	item->vet=malloc(sizeof(char)*maxl);
	return item;
}
static int SOLgenR(Item item ,int liv,int *sol,int *used){
	if(STgetN(item->st)<=liv){
		if(SOLcheck(item, sol))
			return 1;
	}
	for(int i=0; i<MAXL; i++){
		if (used[i]==1)
			continue;
		sol[liv]=i;
		used[i]=1;
		if(SOLgenR(item, liv+1, sol,used))
			return 1;
		used[i]=0;
	}
	return 0;
}

void SOLgen(Item item){
	int used[MAXL]={0};
	int sol[MAXL];
	SOLgenR(item,0, sol,used);
	for(int i=0; i<STgetN(item->st); i++){
		printf("%c %d \n",item->vet[i],sol[i]);
	}
	printf("%d",STgetN(item->st));
}



int powe(int i1,int i2){
	int sol=i1;
	if( i2==0){
		return 1;
	}
	for(int i=0;i<i2-1;i++){
		sol=sol*i1;
	}
	return sol;
}
int STRINGconv(char *string, ST st,int max,int *sol){
	int val[max];
	int v=0;
	int i=0;
	int j=0;
	while(string[i]!='\0'){
		val[i]=sol[STsearch(st,string[i])];
		i++;
	}
	if(val[0]==0){
		return -1;
	}
	while(i>0){
		i--;
		v+=val[j++]*(powe(10,i));
	}
	return v;
}

int SOLcheck(Item item, int *sol){
	int val1;
	int val2;
	int res,testres;
	val1=STRINGconv(item->string1,item->st,MAXS,sol);
	val2=STRINGconv(item->string2,item->st,MAXS,sol);
	res=STRINGconv(item->result,item->st,MAXS+1,sol);
	if(val1==-1|| val2==-1 || res==-1)
		return 0;
	testres=val1+val2;
	if(testres==res){
		return 1;
	}
	return 0;
}


