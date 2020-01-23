#ifndef TEMI_DIVISIONI_H
#define TEMI_DIVISIONI_H

#include "stdio.h"
#include "dipendente.h"

typedef struct divisioni *divisioni_t;
divisioni_t divisioniNEW(char *sigla, int MAX);
void divisioniFree(divisioni_t t);
divisioni_t divisioniScan(FILE *in, int MAX);
void divisioniInsertDipendente(divisioni_t t, dipendente_t dip);
void divisioniStore(FILE *out, divisioni_t t);

#endif //TEMI_DIVISIONI_H
