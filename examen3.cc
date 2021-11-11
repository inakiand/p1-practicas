
// Progama realizado para el examen de P1 por Iñaki Vidal Alonso


// Declaramos las librerias para poder trabajar con nuestro lenguaje de manera correcta


#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Declaramos las funciones para que podamos llamarlas en el main



void menu();
void contadorMonedas(int & , int &);
void calcularCambio(int &, int , int & , int & ,int & , int &);
void menuCambio(int,int,int,int,int,int);


// El main se encargara de repetir la accion de introducir monedas mientras no se introduzca el codigo secreto,


int main(){

    int  cambio , total , contador50 ,contador20,contador10,contador5 , apagar;
    
    do{

    menu();
    contadorMonedas(total ,cambio);
    calcularCambio(total,cambio,contador50,contador20,contador10,contador5);
    menuCambio(total ,cambio ,contador50, contador20, contador10, contador5);
    
    cout << " Apagar ? ";
    cin >> apagar;
    
    }while( apagar != 1000);
    
    if (apagar == 1000){
    
    cout << " La Maquina se ha apagado " << endl;}

    return 0;

    }


// El menu se encarga de mostrar en pantalla lo que la maquina nos pide que hagamos.

void menu(){


    cout << " Deposite moneda (5-10-20-50 céntimos) o pida articulo (tecla 0) ";

    }


// Se encarga de contar el numero de monedas que se introducen en la maquina tanto las validas como no validas y de mostrar por pantalla el dinero que lleva introducido.

void contadorMonedas(int &total , int &cambio ){

    int moneda;

    total = 0;
    cambio = 0;

    do{
    do{


    cin >> moneda;

    if(moneda ==5 || moneda ==10 || moneda ==20 || moneda ==50){

    total = moneda + total;}

    else{

    cambio = moneda +cambio;}

    if (moneda != 0){
    cout << " Lleva introducido = " <<  total << endl;}
    

    }while( moneda != 0);

    if (total < 50 ){

    cout << " Por favor, introduzca más dinero " << endl;}
    
    else{
    
    cout << " Preparando el cafe.. "<< endl;}

    }while(total < 50);


    }


// se encarga de calcular cuantos monedas de cada ahi que devolver dependiendo de lo introducido en la maquina

void calcularCambio(int  &total , int cambio , int &contador50 , int &contador20, int &contador10, int &contador5 ){

     contador50 = 0;
     contador20 = 0;
     contador10 = 0;
     contador5 = 0;

    total = total - 50;
        
    if(total != 0){

    cout << " Aqui tiene su cambio: " << endl;}

    if (total >= 50){

        do{

    total = total - 50;
        contador50++;

        }while( total >= 50);}
        
    
    if(total >= 20){

        do{

        total = total - 20;
        contador20++;

        }while( total >= 20);}

    if(total >= 10){

        do{

        total = total - 10;
        contador10++;

        }while( total >= 10);}
        
    if(total >= 5){

        do{

        total = total - 5;
        contador5++;

        }while( total > 5);}

    }
    
    
    
// Se encarga de mostrar el pantalla lo que le ha sobrado al usuario tanto lo valido como lo no valido 


void menuCambio(int total ,int cambio ,int contador50, int contador20, int contador10, int contador5){


    // caso 50

    if ( contador50 == 1 ){

    cout << contador50 << " Moneda de 50 centimos " << endl;}

    else if  (contador50 > 1){

    cout << contador50 << " Monedas de 50 centimos " << endl;}


    // caso 20


    if ( contador20 == 1){

    cout << contador20 << " Moneda de 20 centimos " << endl;}

    else if  (contador20 > 1){

    cout << contador20 << " Monedas de 20 centimos " << endl;}


    // caso 10


    if ( contador10 == 1){

    cout << contador10 << " Moneda de 10 centimos " << endl;}

    else if  (contador10 > 1){

    cout << contador10 << " Monedas de 10 centimos " << endl;}

    // caso 5


    if ( contador5 == 1){

    cout << contador5 << " Moneda de 5 centimos " << endl;}

    else if  (contador5 > 1){

    cout << contador5 << " Monedas de 5 centimos " << endl;}


    // caso de monedas no validas 
    

    if ( cambio == 1){

    cout << " Recuerde recoger tambien las monedas por valor de " << cambio << " centimo " << endl;}

    else if ( cambio > 1){

    cout << " Recuerde recoger tambien las monedas por valor de " << cambio << " centimos " << endl;}

    }







