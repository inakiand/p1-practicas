#include <iostream>
#include <math.h>

using namespace std;

int mostrar(int );


int main(){

    int n , suma;

    cout << " Introduce un numero ";
    cin >> n;
    suma = mostrar(n);
    cout << " = " << suma << endl;

    return 0;

}

int mostrar(int n){

int suma;
int digito;

suma = 0;

    if (n < 10){
    
    cout << n%10;
     suma = n;
     
     }
 
    else {
    
       digito = n%10;
       suma = (digito+mostrar(n/10));
       cout << " + ";
       cout << digito;}
       
    return suma;

    }
