

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


void almacenar(int []);
void sumarNumeros(  int & , int &, int & , int & , int & , int & , int & , int & , int & , int []);
void dibuja( int , int  , int  , int  , int  , int  , int  , int  , int );



int main(){

    int numeros [100];
    int  c1 , c2 , c3 ,  c4 ,  c5 ,  c6 ,  c7 , c8 ,  c9;

    c1 = 0;
    c2 = 0;
    c3 = 0;
    c4 = 0;
    c5 = 0;
    c6 = 0;
    c7 = 0;
    c8 = 0;
    c9 = 0;

        srand( time(NULL));

        almacenar(numeros);
        sumarNumeros(   c1 ,  c2 ,  c3 , c4 ,  c5 ,  c6 ,  c7 ,  c8 ,  c9 , numeros);
        dibuja(   c1 ,  c2 , c3 ,  c4 , c5 ,  c6 ,  c7 ,  c8 ,  c9);

    return 0;

    }


void almacenar(int numeros [100]){

    for(int i=0;i <100;i++){

        numeros[i] = rand()%9 + 1;
    
    }
  
}

void sumarNumeros( int &c1 , int &c2 , int &c3 , int &c4 , int &c5 , int &c6 , int &c7 , int &c8 , int &c9 , int numeros[]){
 
    for(int i=0; i < 100; i++){
    
    if(numeros[i] == 1)
    
        c1++;
    
    if(numeros[i] == 2)
    
        c2++;
    
    if(numeros[i] == 3)
    
        c3++;
    
    if(numeros[i] == 4)
    
        c4++;
    
    if(numeros[i] == 5)
    
        c5++;
    
    if(numeros[i] == 6)
    
        c6++;
    
    if(numeros[i] == 7)
    
        c7++;
    
    if(numeros[i] == 8)
    
        c8++;
    
    if(numeros[i] == 9)
    
        c9++;
    
    }

}
    
    
void dibuja( int c1 , int c2 , int c3 , int c4 , int c5 , int c6 , int c7 , int c8 , int c9){

    cout << " 9. ";

  
    for(int i = 0; i < c9; i++){
    
        cout << "\u2587";
        
    }
    
        cout << endl;
        cout << " 8. ";
        
    for(int i = 0; i < c8; i++){
    
        cout << "\u2587";
        
    }
    
        cout << endl;
        cout << " 7. ";
    
    for(int i = 0; i < c7; i++){
    
        cout << "\u2587";
        
    }
    
        cout << endl;
        cout << " 6. ";
        
    for(int i = 0; i < c6; i++){
    
        cout << "\u2587";
        
    }
    
        cout << endl;
        cout << " 5. ";
    
    for(int i = 0; i < c5; i++){
    
        cout << "\u2587";
        
    }
    
        cout << endl;
        cout << " 4. ";
        
    for(int i = 0; i < c4; i++){
    
        cout << "\u2587";
        
    }
    
        cout << endl;
        cout << " 3. ";
        
     for(int i = 0; i < c3; i++){
    
        cout << "\u2587";
        
    }
    
        cout << endl;
        cout << " 2. ";
        
    for(int i = 0; i < c2; i++){
    
        cout << "\u2587";
        
    }
    
        cout << endl;
        cout << " 1. ";
        
    for(int i = 0; i < c1; i++){
    
        cout << "\u2587";
        
    }
    
        cout << endl;

} 


    
