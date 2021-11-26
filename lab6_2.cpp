#include <iostream>
#include <cmath>

using namespace std;
double  deg2rad(double deg1){
    double rad = deg1*(M_PI/180.0);
    return rad;
}
double  rad2deg(double rad){
     double deg = rad*(180.0/M_PI);
    return deg;
}
double findXComponent(double X1,double X2,double A1,double A2){
    double vector1 = (cos(A1)*X1)+(cos(A2)*X2);
    return vector1;
}
double findYComponent(double Y1,double Y2,double A1,double A2){
    double vector2 = (sin(A1)*Y1)+(sin(A2)*Y2);
   return vector2;
}
double pythagoras(double deg1 ,double deg2){
    double Triangle = sqrt(pow(deg1 , 2) + pow(deg2 , 2));
   return Triangle;
}
void showResult(double xcom, double ycom){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout << "Length of the resultant vector = "<< xcom <<endl;
    cout << "Direction of the resultant vector (deg) = "<< ycom <<endl; 
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
   
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
}
