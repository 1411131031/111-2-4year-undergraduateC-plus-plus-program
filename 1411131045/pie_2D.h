#ifndef pie2d_H

#define pie2d_H

using namespace std;

//square_2d�����O(�]�t6�Ӧ�����ƻP2�Ӹ�Ʀ���)

class pie_2d {

public:

    pie_2d(double = 0);           //�غc�l

    void setradious(double);           //�]�w�b�|

    double getradious();                     //���o�b�|

    double compute_area();            //�p�⭱�n

    double radious;                          //�b�|


};

#endif
