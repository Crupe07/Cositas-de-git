#include <iostream>
#include "funciones.h"

using namespace std;

int main(){
    double t = 0, dt = 0.005, h = 8.5, Vi = 20;
    double * paso = new double[2];
    paso[0] = t;
    paso[1] = h;
    
    for(;paso[1]>0;){
        
        cout << paso[0] <<" " << paso[1] << endl;
        t = paso[0];
        h = paso[1];
        paso = rungekuta(t, dt, h, Vi);
    }
}
































































