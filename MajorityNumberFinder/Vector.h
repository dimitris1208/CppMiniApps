#ifndef VECTOR_H
#define VECTOR_H

#include "math.h"


class Vector {
private:
    double x , y ;
public:
    Vector();
    Vector(double X,double Y);
    void SetX (double X){x=X;}
    void SetY (double Y){y=Y;}
    double GetX (){return x ;}
    double GetY (){return y ;}
    double magnitude (){return sqrt(x*x+y*y); }
    double angle (){
    double an=0,mag ;
    mag = magnitude() ;
    if (mag!=0){
    an = x/mag;
    }
    return asin(an);
    }
    float angleD (){
    double temp;
    temp = magnitude();
    temp=temp*3.14/180;
    return temp ;
    }
    void multiply(double mul){
        x=x*mul;
        y=y*mul;
    }
    Vector add (Vector newvector){
    Vector temp ;
    temp.SetX(newvector.x+x);
    temp.SetY(newvector.y+y);
    return temp ;

    }
    Vector clone(){
    Vector temp ;
    temp.SetX(x);
    temp.SetY(y);
    return temp;
    }


};
#endif
