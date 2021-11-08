#include <iostream>

using namespace std;


int LeerCodigoEAN(long);
int CalcularSuma(long , int );
void ComprobarEANCorrecto( int );


int main(){

    long codigo;
    int  suma;
    char respuesta;


    do{
    
    
   codigo = LeerCodigoEAN(codigo);
   suma = CalcularSuma(codigo,suma);
   ComprobarEANCorrecto(suma);

    do{

    cout << "¿ Quieres introducir otro codigo de barras ? ";
    cin >> respuesta;

    if (respuesta !='S' && respuesta != 'N')

    cout << " Caracter invalido porfavor introduzca un caracter S o N " << endl;

    }while(respuesta !='S' && respuesta != 'N');

    }while(respuesta == 'S' );
    
    cout << "------------------------------------------ " << endl;

    cout << " Gracias por introducir sus codigos EAN 8 " << endl;

    return 0;

    }



int LeerCodigoEAN(long codigo){

    do{

    cout << " Introduce el numero EAN correspondiente: ";
    cin >> codigo;

    if ( codigo > 99999999 || codigo < 1){

    cout << " Porfavor introduz un codigo EAN correcto " << endl;}

    }while( codigo > 99999999 || codigo < 1);

    return (codigo);

}


int CalcularSuma(long codigo , int suma){

int numero , contador;

contador = 0;
suma = 0;

    do{
    
    numero = codigo % 10;
    codigo = codigo/10;
    contador++;
    
    
    
    if ( contador % 2 == 0)
    
    suma = ( numero * 3) + suma;
    
    else
    
    suma = numero + suma;
     
    
    }while(codigo > 0);
    

    return(suma);
  
}


void ComprobarEANCorrecto( int suma){

if (suma % 10 == 0)

cout << " El codigo de barras es valido " << endl;

else 

cout << " El codigo de barras no es valido " << endl;

}

