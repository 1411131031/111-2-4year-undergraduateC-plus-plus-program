#ifndef cylinder3d_H

#define cylinder3d_H

#include"pie_2D.h"

using namespace std;

/*�~�����O���ŧi��k���u�l�����O�G��¦���O�v*/

//�~��pie_2d���O��cylinder_3d���O(�]�t5�Ӧ�����ƻP1�Ӹ�Ʀ��� + pie_2d������ƻP��Ʀ���)

class cylinder_3d:public pie_2d

{

public:

    cylinder_3d(double = 0, double = 0);            //�غc�l

    void setheight(double);                           //�]�w����

    double getheight();                                     //���o����   

    double compute_volume();                          //�p����n

    double compute_surface();                         //�p����n

    double height;                                          //��

};

#endif
