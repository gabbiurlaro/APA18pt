#ifndef GRAFO_H
#define GRAFO_H


typedef struct{int v, w;}Edge;
typedef struct grafo *Graph;

Graph GRAPHinit(int V);
void GRAPHfree(Graph t);
void GRAPHinsertE(Graph G, int id1, int id2);
void GRAPHremoveE(Graph G, int id1, int i2);
Graph GRAPHreadFile(FILE *in);
void GRAPHprintmatrix(Graph G);
int GRAPHedges(Graph G, int *v, int i);
int GRAPHgetE(Graph G);
int GRAPHgetV(Graph G);
int isKernel(Graph G, int *sol, int dim);
int *kernelRead(FILE *in,Graph G, int *dim);
void GRAPHminimumKernel(FILE *out, Graph G);
#endif
