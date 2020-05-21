#include<iostream>  
using namespace std;    
int main()  
{  
int Factorial(int);  
int Fact,value;  
cout << "Número: ";  
cin >> value;  
Fact = Factorial(value);  
cout << "El factorial del num es: " << Fact << endl;  
return 0;     
}  

int Factorial(int i)  
{      
    if(i == 0)    
        return(1); 
    
    else  
{  
        return(i*Factorial(i-1));      
}  
} 