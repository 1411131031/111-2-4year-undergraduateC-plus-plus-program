#ifndef square2d_H

#define square2d_H

using namespace std;

//square_2d�����O(�]�t6�Ӧ�����ƻP2�Ӹ�Ʀ���)

class square_2d {

public:

    square_2d(double = 0, double = 0);           //�غc�l

    void setlength(const double);           //�]�w����

    void setwidth(const double);            //�]�w�e��

    double getlength();                     //���o����   

    double getwidth();                      //���o�e��   

    double compute_area() const;            //�p�⭱�n

    double length;                          //��

    double width;                           //�e

};

#endif#pragma once
