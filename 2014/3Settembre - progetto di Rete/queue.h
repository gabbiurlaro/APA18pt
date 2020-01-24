#ifndef APATEMI_QUEUE_H
#define APATEMI_QUEUE_H

#include "grafo.h"

typedef struct queue *Q;

Q QUEUEinit(int maxN);
void QUEUEput(Q q, Edge e);
int QUEUEempty(Q q);
Edge QUEUEget(Q q);
#endif //APATEMI_QUEUE_H
