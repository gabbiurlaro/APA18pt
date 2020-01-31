#include <stdio.h>
#include "graph.h"

int main(int argc, char **argv){
    Graph G;
    FILE *in;
    int k, j;
    in = fopen(argv[1], "r");
    G = GRAPHload(in);
    fclose(in);
    GRAPHprintmatrix(G);
    printf("Inserisci k: ");
    scanf("%d", &k);
    generaKcore(G, k);
    printf("Inserisci j: ");
    scanf("%d", &j);
    checkisjedgeconnected(G, j);
    return 0;
}