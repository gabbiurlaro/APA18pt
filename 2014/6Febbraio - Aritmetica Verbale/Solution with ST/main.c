/*
 ============================================================================
 Name        : 2014_02_06_.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Item.h"
#include "ST.h"
#define MAXL 10 //maximum number of different letters
#define MAXS 9 //maximum string lenght

void load(Item item){
	int i=0;
	int j=0;
	char buffer[3*(MAXS+2)];
	printf("Inserisci le tre stringhe\n");
	scanf("%s",item->string1);
	scanf("%s",item->string2);
	scanf("%s",item->result);
	strcpy(buffer,item->string1);
	strcat(buffer,item->string2);
	strcat(buffer,item->result);
	while(buffer[i]!='\0'){
		if(STsearch(item->st,buffer[i])==-1){
			STinsert(item->st,buffer[i],j);
			item->vet[j]=buffer[i];
			j++;
		}
		i++;
	}
}

void checksol(Item item){
	char c;
	int sol[MAXL],i,id;
	do{
		printf("Insert letter and number with format \"letter number\"\n");
		scanf(" %c %d",&c,&i);
		if(c=='0')
			break;
		id= STsearch(item->st,c);
		sol[id]=i;
	}while(1);
	printf("%d \n ",SOLcheck(item,sol));
}


int main(void) {
	Item item=ITEMinit(MAXL,MAXS);
	int flag=1;
	load(item);
	while(flag){
		printf("premere 1 per verificare una soluzione\n");
		printf("premere 2 per trovare una soluzione\n");
		printf("premere -1 per uscire dal programma\n");
		scanf("%d",&flag);
		if(flag==1)
			checksol(item);
		if(flag==2)
			SOLgen(item);
	}
	return EXIT_SUCCESS;
}
