#ifndef pie2d_H

#define pie2d_H

using namespace std;

//square_2d�����O(�]�t6�Ӧ�����ƻP2�Ӹ�Ʀ���)

class square_2d {

public:

    square_2d(double = 0, double = 0);           //�غc�l

    void setradius(const double);           //�]�w�b�|

    void setheight(const double);            //�]�w����

    double getradius();                     //���o�b�|   

    double getheight();                      //���o����   

    double compute_area() const;            //�p����n

    double radius;                          //��

    double height;                           //�e

};

#endif#pragma once
#pragma once
