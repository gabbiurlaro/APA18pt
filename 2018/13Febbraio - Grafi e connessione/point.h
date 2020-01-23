#ifndef POINT_H
#define POINT_H

typedef struct{
    char *id;
    float x,y;
}point;

point pointCreate(char *id, float x, float y);
float distance(point a, point b);
#endif
