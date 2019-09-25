# Rajzoloprog-C-
Rajzoló program. A progi áll egy kordinata , teglalap, kör ,drawing és swg osztályból
#ifndef KöR_H
#define KöR_H
#include "koord.h"

class kor
{
koord center;
double radius;
public:
    kor(const double x,const double y, const double r);
    koord getCenter() const;
    double getRadius()const;
    double getCenterx()const;
    double getCentery()const;
};

#endif // KöR_H
