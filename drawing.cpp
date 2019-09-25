# Rajzoloprog-C-
Rajzoló program. A progi áll egy kordinata , teglalap, kör ,drawing és swg osztályból
#include "drawing.h"
drawing::drawing():
bool drawing::addkor(const double x,const double y,const double r){
if (counter==10)return false;

kor[counter]=new kor(x,y,r);
counter++;
}

