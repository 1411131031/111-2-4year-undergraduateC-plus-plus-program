#ifndef cylinder_3D_H
#define cylinder_3D_H
#include"pie_2D.h"

using namespace std;

class cylinder_3D :public pie_2D

{

public:

    cylinder_3D(double = 0, double = 0);            //�غc�l

    void setheight(const double);                           //�]�w����

    double getheight();                                     //���o����   

    double compute_volume() const;                          //�p����n

    double compute_surface() const;                         //�p����n

    double height;                                          //��

};

#endif
