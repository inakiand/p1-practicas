

#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>

using namespace std;

void imprimir_caballo(int , int , int);
void caballos_validos(int & , int & , int &);
void carrera(int & , int & , int &);
void imprimir_carrera(int , int , int);
void pedir_apuesta(int &,int &);
int ajustar_credito(int , int , int , int , int ,int ,int , int );


int main(){

    int  c1 , c2 ,c3 , g1 , g2 , g3 , credito , apuesta;

    credito = 20;
    apuesta = 0;

   
    do{
    
    cout << " ********************************* " << endl;
    
      pedir_apuesta(credito,apuesta);
       

      if (apuesta != 0){
      
        caballos_validos(c1,c2,c3);
        carrera(g1,g2,g3);
        imprimir_carrera(g1,g2,g3);
        imprimir_caballo(g1,g2,g3);
}

    
        credito  = ajustar_credito(c1,c2,c3,g1,g2,g3,apuesta , credito);
        
        
    }while (apuesta != 0 && credito != 0);

    cout << "********************************** " << endl;
    
    cout << " Gracias por participar te vas con " << credito << " $ " << endl;

    return 0;

}




void caballos_validos(int &c1 ,int &c2 ,int &c3){


    do{
    do{
    
        cout << " Elige tres caballos: " << endl;
        cin >> c1; 
        cin >> c2; 
        cin  >> c3;
    
        if((c1 < 1 || c1 > 6) ||(c2 < 1 || c2 > 6) || (c3 < 1 || c3 > 6))
    
            cout << "Introduzca un numero entre el 1 y 6 " << endl;
    
        else if (c1 == c2 || c1==c3 || c2==c3 )
    
            cout << " Introduza 3 caballos distintos para apostar " << endl;
    
    }while((c1 < 1 || c1 > 6) ||(c2 < 1 || c2 > 6) || (c3 < 1 || c3 > 6));
    }while(c1 == c2 || c1==c3 || c2==c3 );
    
    cout << "******************************** " << endl;
}

void carrera( int &g1 , int &g2 , int &g3){

    do{

        srand(time(NULL));

        g1 = rand()%(6)+ 1;
        g2 = rand()%(6)+ 1;
        g3 = rand()%(6)+ 1;


    }while(g1 == g2 || g1==g3 || g2==g3);


}

void imprimir_carrera(int g1 , int g2 , int g3){

cout << " RESULTADO DE LA CARRERA " << endl;

cout << " *********************** " << endl;

cout << " Primero: " << g1 << endl;
cout << " Segundo: " << g2 << endl;
cout << " Tercero " << g3 << endl;

cout << " *********************** " << endl;


}


void imprimir_caballo(int g1 ,int g2 ,int g3){

cout << " PODIO DEL PRIMERO AL TERCERO " << endl;

cout << "***************************** " << endl;

// para 1

    if ( g1 == 1 )

        cout << " Imperioso " << endl;

    else if ( g1 == 2 )
    
        cout << " Herradura " << endl;

    else if ( g1 == 3 )

        cout << " Rocinante " << endl;

    else if ( g1 == 4 )

        cout << " Relincho " << endl;

    else if ( g1 == 5 )

        cout << " Jamelgo " << endl;

    else if ( g1 == 6 )

        cout << " Trueno " << endl;
        
// para 2


    if ( g2 == 1 )

        cout << " Imperioso " << endl;

    else if ( g2 == 2 )
    
        cout << " Herradura " << endl;

    else if ( g2 == 3 )

        cout << " Rocinante " << endl;

    else if ( g2 == 4 )

        cout << " Relincho " << endl;

    else if ( g2 == 5 )

        cout << " Jamelgo " << endl;

    else if ( g2 == 6 )

        cout << " Trueno " << endl;
        
//para 3


    if ( g3 == 1 )

        cout << " Imperioso " << endl;

    else if ( g3 == 2 )
    
        cout << " Herradura " << endl;

    else if ( g3 == 3 )

        cout << " Rocinante " << endl;

    else if ( g3 == 4 )

        cout << " Relincho " << endl;

    else if ( g3 == 5 )

        cout << " Jamelgo " << endl;

    else if ( g3 == 6 )

        cout << " Trueno " << endl;

    }

void pedir_apuesta(int &credito , int &apuesta){


    do{

        cout << " Tu credito es " << credito << ".00" << " ¿ Cuanto apuestas ?: ";
        cin >> apuesta;

    if (apuesta > credito )

        cout << " Apuesta invalida " << endl;

    }while( apuesta > credito );
    

}


int  ajustar_credito(int c1 , int c2 , int c3 , int g1 , int g3 , int g2 , int apuesta , int credito){


if ( c1 == g1 )

credito = apuesta * 5;

else if ( c1 == g1 && c2 == g2)

credito = apuesta * 7;

else if ( c1 == g1 && c2 == g2 && c3 == g3)

credito = apuesta * 20;

else 

credito = credito - apuesta;


return credito;


}

























