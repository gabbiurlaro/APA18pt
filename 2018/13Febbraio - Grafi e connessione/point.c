#include "point.h"
#include "string.h"
#include "math.h"

point pointCreate(char *id, float x, float y){
    point P;
    P.id  = strdup(id);
    P.x = x;
    P.y = y;
    return P;
}

float distance(point a, point b){
    return sqrt((a.x - b.x)*(a.x - b.x)+(a.y - b.y)*(a.y - b.y));
}
