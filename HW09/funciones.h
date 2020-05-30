#include <iostream>
using namespace std;

double Velocidad(double t, double Vi);
double * rungekuta(double t, double dt, double h , double Vi);

double Velocidad(double t, double Vi){
    double g = -9.76;
    return Vi + g*t;
}
double * rungekuta(double t, double dt, double h, double Vi){
    double k1 = Velocidad(t, Vi);
    double k2 = Velocidad(t + dt/2, Vi + k1/2);
    double k3 = Velocidad(t + dt/2, Vi + k2/2);
    double k4 = Velocidad(t + dt, Vi + k3);    
    double * paso = new double[2];
    paso[0] = t +dt;
    paso[1] = h + (k1 + 2*k2 + 2*k3 + k4)/6;    
    return paso;
}
