#include<iostream>

#include<stdexcept>

#include"cylinder_3D.h"

using namespace std;

cylinder_3d::cylinder_3d(double l, double r)

{
    setlength(l);

    setradius(r);
}

//��n�p��G��P�v*�b�|^2*����

double cylinder_3d::compute_volume() const {

    return 3.14 * radius * radius * length;

}