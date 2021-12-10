
#include <iostream>
#include <cstring>
#include <time.h>
#include <stdio.h>   

using namespace std;

const int MAX = 100;

typedef char Tcadena [20];

struct Tobjeto{

Tcadena nombre;
int precio;

};

typedef Tobjeto Tobjetos[MAX];



void asignarObjeto(Tobjetos,int &);
void venderObjeto(Tobjetos,int & , int &);
void modificarObjeto(Tobjetos,int);



int main (){

    Tobjetos objeto;
    int tam = 0;
    int opcion;
    int recompensa;
  
  
  cout << "El mercadillo de Lucas " << endl;
  
  cout << "***********************" << endl;
  
  do{
    
    cout << "1. Alta de objeto " << endl;
    cout << "2. Baja de objeto " << endl;
    cout << "3. Modificacion del precio de un objeto " << endl;
    cout << "4. Salir " << endl;
    
    cout << "Opción: ";
    cin >> opcion;
    
    cout << "*****************************************" << endl;
    
    
    switch(opcion){
    
        case 1:
        
            asignarObjeto(objeto,tam);
        
        break;
        
        case 2:
        
            venderObjeto(objeto,tam ,recompensa);
        
        break;
        
        case 3:
            
            modificarObjeto( objeto , tam );
            
        break;
        
        case 4:
        
    
        cout << " Has recogido " << recompensa;
        cout << " Vuelva pronto ^^ " << endl;
        cout << "******************" << endl;
        
        break;
        
        default:
            
            cout << " Opción invalida porfavor vuelva a introducirla " << endl;
            cout << "*****************************************" << endl;
        
    }
    
    }while(opcion !=4);

return 0;

}   


void asignarObjeto(Tobjetos objeto , int &tam){

    char respuesta;
    
    do{

        cout << "Nombre del objeto: ";
        cin.ignore();
        cin.getline(objeto[tam].nombre,20);
        
        cout << "Precio: ";
        cin >> objeto[tam].precio;
        
        tam++;
        
      do{
        
        cout << "¿Quieres introducir otro objeto? (s/n) ";
        cin >> respuesta;
        
        if (respuesta != 'n' && respuesta != 's')
        
        cout << " Respuesta invalida " << endl;
        
      }while(respuesta != 'n' && respuesta != 's');
        
    }while(respuesta != 'n');
 
    
    
    cout << "************************************" << endl;

}


void venderObjeto(Tobjetos objeto , int &tam , int &recompensa){

    int comparacion;
    char vendido [20];
    int recom;
    
    cout << "Nombre del objeto vendido: ";
    cin >> vendido;
    
        
    for (int i = 0; i < tam ; i++){
    
     comparacion = strcmp(objeto[i].nombre,vendido);
    
        if (comparacion == 0){
        
        cout << "Precio: " <<  objeto[i].precio;
        
        recom =  objeto[i].precio;
        
        
         objeto[i] = objeto [i+1];
        
        }
        
    }
    
    recompensa += recom;
    
    cout << endl;
    cout << "*********************************" << endl;

}

void modificarObjeto(Tobjetos objeto , int tam){

    char vendido [20];
    int comparacion;

    cout << " Nombre del objeto a modificar: ";
    cin >> vendido;

        
    for (int i = 0; i < tam ; i++){
    
     comparacion = strcmp(objeto[i].nombre,vendido);
    
        if (comparacion == 0){
        
        cout << "Precio: " <<  objeto[i].precio << endl;
        cout << "Introduce el nuevo precio ";
        cin >> objeto[i].precio;
        
        cout << " Gracias por modificar el precio " << endl;
        
        }
    }
        cout << "************************************" << endl;
}


































