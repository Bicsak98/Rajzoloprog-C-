# Rajzoloprog-C-
Rajzoló program. A progi áll egy kordinata , teglalap, kör ,drawing és swg osztályból
#ifndef KOORD_H
#define KOORD_H


class koord
{
    double x;
    double y;
public:
    koord(const double x, const double y);
    double getX() const;
    double getY()const;
};
void testkoord();
#endif // KOORD_H
