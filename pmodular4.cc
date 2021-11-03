#include <iostream>


using namespace std;


void pideFecha(int &dia , int &mes , int &anyo){

    do{

    cout << " Introduce el dia de nacimiento: ";
    cin >> dia;
    
    if (dia < 1 || dia >31){
    
    cout << " Error el numero tiene que estar comprendido entre 1 y 31 "<< endl;}

    }while (dia < 1 || dia >31);
    
    do{
    
    cout << " Introduce el mes de nacimiento: ";
    cin >> mes;
    
    if (mes < 1 || mes >12){
    
    cout << " Error el numero tiene que estar comprendido entre 1 y 12 "<< endl;}
    
    }while (mes < 1 || mes > 12);
    
    do{
    
    cout << " Introduce el año de nacimiento: ";
    cin >> anyo;
    
     if (anyo < 1900){
    
    cout << " Error el numero tiene que ser mayor o igual 1900 "<< endl;}
    
    }while (anyo < 1900);
    
}

int sumaFecha( int dia , int mes, int anyo , int numero){

  int numdia , nummes, numanyo , sumatotal ,  numerod , numerom , numeroa;
  
  numerod = 0;
  numerom = 0;
  numeroa = 0;

    do{
    
    numdia = dia % 10;
    dia = dia/10;
    numerod = numdia + numerod;

    } while ( dia > 0);
    
    do{
    
    nummes = mes % 10;
    mes = mes/10;
    numerom = nummes + numerom;
 
    
    } while ( mes > 0);
    
    do{
    
    numanyo = anyo % 10;
    anyo = anyo/10;
    numeroa = numanyo + numeroa;
    
    } while ( anyo > 0);
    
    sumatotal = numerod + numerom + numeroa;
    numero = sumatotal % 3;
   
   
    return (numero);
}

void muestra(int &nrojo , int &nazul , int &namarillo , int numero , int dia , int mes , int anyo){

numero = sumaFecha(dia , mes , anyo ,numero);

switch (numero){

    case 0:
    
       cout << " Tu color es el rojo. " << endl;
       nrojo++;
       
    break;
       
    case 1:
    
       cout << " Tu color es el azul. " << endl;
       nazul++;
       
    break;
    
    case 2:
    
       cout << " Tu color es el amarillo. " << endl;
       namarillo++;
       
    break;
    
    }


}



int informe(int nrojo , int namarillo , int nazul){

    if (nrojo > nazul || nrojo > namarillo){
    
    cout << "El color mas repetido es el rojo " << endl;}
    
    else if (nazul > nrojo || nazul > namarillo){
    
    cout << "El color mas repetido es el azul " << endl;}
    
    else{
    
    cout << "El color mas repetido es el amarillo " << endl;}
    
    return 0;
}
  
  
int main(){

    int dia , mes ,anyo, numero ,nazul,nrojo,namarillo;
    char respuesta;
    
    
    do{
    

    pideFecha(dia,mes,anyo);
    sumaFecha(dia,mes,anyo, numero);
    muestra(nrojo,nazul,namarillo,numero , dia , mes , anyo);
    
    do{
    
    cout << " Quiere seguir con el programa (s/n): ";
    cin >> respuesta;
    
    if ( respuesta != 's' && respuesta != 'n')
    
    cout << " Parametro invalido introduzca un parameto s o n. " << endl;
    
    }while ( respuesta != 's' && respuesta != 'n');
    
    }while (respuesta == 's');
    
    informe(nrojo,namarillo,nazul);
    
    return 0;
}
 




