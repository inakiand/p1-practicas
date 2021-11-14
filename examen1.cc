

// Programa para P1 realizado por Iñaki Vidal Alonso

#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>

using namespace std;

// Definimos la funciones para que el main sepa a que funciones estamos haciendo referencia

void generarCodigo(char & , char & , char & , char &);
void leeUsuario(char & , char & , char & , char &);
void comprobar( char , char ,char, char ,char, char ,char ,char , int &);

// realizamos el main que nos ejecutara todos los modulos y se encargara de repetir el programa las veces necesarias aparte de llevar el contador


int main(){

    char l1 ,  l2 ,  l3 ,  l4;
    char u1 ,  u2 ,  u3 ,  u4;
    char repetir;
    int contador1 , contador , contador2 , ctv , ct ;
    
    ctv = 0;
    ct = 0;
    contador2 = 0;
    contador = 0;
    

    
do{
do{

    generarCodigo(l1 ,l2,l3, l4);
    leeUsuario(u1 , u2 , u3 , u4);
    comprobar(l1 ,l2,l3, l4,u1 , u2 , u3 , u4 , contador1);
    contador++;


}while( contador != 5 && contador1 != 4);

if(contador1 == 4 && contador !=5){
contador2++;}

else{
ct++;}


  
  cout << " ¿Quiere seguir jugando? ";
  cin >> repetir;
 
  
  ct = contador + ct;
  ctv = contador2 + ctv;
  
} while(repetir =='s');
  
  cout << " El numero de partidas totales jugadas es: " << ct << endl;
  cout << " El numero de veces gandas es: " << ctv << endl;
  
    return 0;

}



void generarCodigo(char &l1 , char &l2 , char &l3 , char &l4){

    do{

    l1 = rand()%(26) + 'A';
    l2 = rand()%(26) + 'A';
    l3 = rand()%(26) + 'A';
    l4 = rand()%(26) + 'A';
    

    }while ( l1 == l2 || l1 == l3 || l2 == l3);

}

void leeUsuario(char &u1 , char &u2 , char &u3 , char &u4){

    do{

    cout << " Introduzca una lentra entre la A y la Z: ";
    cin >> u1;

    cout << " Introduzca una lentra entre la A y la Z: ";
    cin >> u2;

    cout << " Introduzca una lentra entre la A y la Z: ";
    cin >> u3;

    cout << " Introduzca una lentra entre la A y la Z: ";
    cin >> u4;
   
    if ( u1 == u2 || u1 == u3 || u2 == u3)
    
    cout << "Por favor introuzca 4 letras distintas" << endl;

    }while ( u1 == u2 || u1 == u3 || u2 == u3);
}

void comprobar(char l1 , char l2 ,char l3 ,char l4 , char u1 , char u2 , char u3 ,char u4 , int &contador1){




contador1 = 0;


    // Primer caso

    if ( l1 == u1 ){

    contador1++;}

    else if (l1 == u2){

    contador1++;}

    else if (l1 == u3){

    contador1++;}

    else if (l1 == u4){

    contador1++;}

    // Segundo caso

    if ( l2 == u1 ){

    contador1++;}

    else if (l2 == u2){

    contador1++;}

    else if (l2 == u3){

    contador1++;}

    else if (l2 == u4){

    contador1++;}

    // tercer caso

    if ( l3 == u1 ){

    contador1++;}

    else if (l3 == u2){

    contador1++;}

    else if (l3 == u3){

    contador1++;}

    else if (l3 == u4){

    contador1++;}

    // cuarto caso

    if (l4 == u1){

    contador1++;}

    else if (l4 == u2){

    contador1++;}

    else if (l4 == u3){

    contador1++;}

    else if (l4 == u4){

    contador1++;}
    
    cout << " El numero de letras acertadas es " << contador1 << endl;

    }
