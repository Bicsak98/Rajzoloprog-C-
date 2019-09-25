# Rajzoloprog-C-
Rajzoló program. A progi áll egy kordinata , teglalap, kör ,drawing és swg osztályból
#include "koord.h"
#include <iostream>
#include <string>
using namespace std;

koord::koord(const double x, const double y): x(x), y(y) {}
double koord::getX() const{return x;};
double koord::getY()const{return y;};
void testkoord(){
    koord A(0,0);
    koord B(1,3);
    cout<<"A (0,0):"<<A.getX()<<","<<A.getY()<<endl;
    cout<<"B (1,3):"<<B.getX()<<","<<B.getY()<<endl;
};
