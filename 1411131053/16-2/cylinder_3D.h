#ifndef cylinder3d_H

#define cylinder3d_H

#include"pie_2D.h"

using namespace std;

/*�~�����O���ŧi��k���u�l�����O�G��¦���O�v*/

//�~��square_2d���O��rect_3d���O(�]�t5�Ӧ�����ƻP1�Ӹ�Ʀ��� + square_2d������ƻP��Ʀ���)

class cylinder_3d :public cylinder_3d

{

public:

    cylinder_3d(double = 0, double = 0);            //�غc�l

    void setlength(const double);                   //�]�w����

    double setradius();                             //���o�b�|   

    double compute_volume() const;                  //�p����n
};

#endif#pragma once
#pragma once
