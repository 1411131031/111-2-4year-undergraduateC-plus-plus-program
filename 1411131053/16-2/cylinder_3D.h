#ifndef cylinder3d_H

#define cylinder3d_H

#include"pie_2D.h"

using namespace std;

/*繼承類別的宣告方法為「衍生類別：基礎類別」*/

//繼承square_2d類別的rect_3d類別(包含5個成員函數與1個資料成員 + square_2d內的函數與資料成員)

class cylinder_3d :public pie_2d

{

public:

    cylinder_3d(double = 0, double = 0);            //建構子

    void setlength(const double);                   //設定長度

    void setheight(const double);                   //設定高度

    double setradius(const double);                 //設定半徑   

    double getlength();                             //取得長度

    double getheight();                             //取得高度

    double getradius();                             //取得半徑

    double compute_volume() const;                  //計算體積

    double compute_surface() const;                 //計算面積
};

#endif#pragma once
#pragma once
