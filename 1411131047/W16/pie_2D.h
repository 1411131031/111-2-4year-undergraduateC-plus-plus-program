#ifndef pie_2D_H

#define pie_2D_H

using namespace std;



class pie_2D {

public:

    pie_2D(double = 0);           //�غc�l

    void setR(const double);           //�]�wR

    double getR();                     //���oR   

    double compute_area() const;            //�p�⭱�n

    double R;                          //�b�|


};

#endif