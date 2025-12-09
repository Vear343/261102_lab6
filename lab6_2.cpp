#include <iostream>
#include <math.h>

using namespace std;

double deg2rad(double deg){
    double rad = deg * (M_PI/180);
    return rad;
}

double rad2deg(double rad){
    double deg = rad * (180/M_PI);
    return deg;
}

double findXComponent(double l1,double l2,double deg1,double deg2){
    double l1_com = l1 * cos(deg1);
    double l2_com = l2 * cos(deg2);
    double lx = l1_com + l2_com;
    return lx;
}

double findYComponent(double l1,double l2,double deg1,double deg2){
    double l1_com = l1 * sin(deg1);
    double l2_com = l2 * sin(deg2);
    double ly = l1_com + l2_com;
    return ly;
}

double pythagoras(double lx, double ly){
    double result = sqrt(pow(lx,2)+pow(ly,2));
    return result;
}

double showResult(double length, double direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << length << endl;
    cout << "Direction of the resultant vector (deg) = " << direction << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    return 0;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);

    return 0;
}
