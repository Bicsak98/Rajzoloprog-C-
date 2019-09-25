# Rajzoloprog-C-
Rajzoló program. A progi áll egy kordinata , teglalap, kör ,drawing és swg osztályból
#include "kör.h"
#include <iostream>
using namespace std;
kor::kor(const double x,const double y, const double r): center(x,y)/*koord konstruktort hiv meg*/, radius(r) {
    if(radius<0){
        radius=0;
        cerr<<"negativ a radius"<<endl;
    }
}
koord kor::getCenter()const{return center;};
double kor::getRadius()const{return radius;};
double kor::getCenterx()const{return center.getX();};
double kor::getCentery()const{return center.getY();};
void testkor(){
 kor C1(0,0,20);
 kor C2(3,-3,6);
 cout<<"C1(0,0,20)"<<endl
     <<"center: "<<C1.getCenterx()<<C1.getCentery()<<C1.getCenter.getX()<< C1.getCenter.getY()<<endl
     <<"radius: "<<C1.getRadius()<<endl;
 cout<<"C2(3,-3,6)"<<endl
     <<"center: "<<C2.getCenterx()<<C2.getCentery()<< C2.getCenter.getX()<<C2.getCenter().getY()<<endl
     <<"radius: "<<C2.getRadius()<<endl;
};
