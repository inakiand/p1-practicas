    // Progama para p1 realizado por iñaki vidal alonso
    
    
#include <iostream>
#include <cstring>
#include <time.h>
#include <stdio.h>                                           

using namespace std;

const int MAX=50; //NUMERO MAXIMO DE CANARIOS QUE PUEDE TENER EL TIO JUAN

typedef char TCadena[10]; 

struct TFecha{
    int dia;
    int mes;
    int anyo;
};

struct TMascota{    
    TCadena nombre;
    TFecha fec;
};

typedef TMascota TCanarios[MAX];

void iniciaCanarios(TCanarios, int &);
void introducirCanario(TCanarios, int &);
void mostrarCanario(TCanarios , int );

int main(){
    TCanarios pajaros;
    int tam;
    int opcion;
    
    iniciaCanarios(pajaros, tam);
    
    do{
    
        cout << " 1. Dar de alta un canario " << endl;
        cout << " 2. Comprobar Vitaminas " << endl;
        cout << " 3. Listado " << endl;
        cout << " 4. Salir " << endl;
        cin >> opcion;
        
        cout << "******************************* " << endl;
        
        switch(opcion){
        
            case 1:
                
                introducirCanario(pajaros, tam);
                
            break;
            
            case 2:
                 
                 cout << " Me da pereza hacer esta mierda a si que SAXXXXXXXXXXXXXXX " << endl;
                 
                 cout << "**************************************" << endl;
                
            break;
            
            case 3:
            
                 mostrarCanario(pajaros, tam);
                
            break;
            
            case 4:
            
                cout << " Adios " << endl;
            
            break;
            
            default :
            
                cout << " Opción incorrecta , porfavor introduce una opcion valida. " << endl;
        }
        
    }while(opcion !=4 );
    
    
    return 0;
}

//Introduce los datos de los cuatro canarios iniciales

void iniciaCanarios(TCanarios pajaros, int &tam){

    strcpy(pajaros[0].nombre,"Piopio");
    pajaros[0].fec.dia=1;
    pajaros[0].fec.mes=1;
    pajaros[0].fec.anyo=2015;
	
    strcpy(pajaros[1].nombre,"Lina");
    pajaros[1].fec.dia=22;
    pajaros[1].fec.mes=12;
    pajaros[1].fec.anyo=2018;
	
    strcpy(pajaros[2].nombre,"Trompetilla");
    pajaros[2].fec.dia=5;
    pajaros[2].fec.mes=3;
    pajaros[2].fec.anyo=2017;
	
    strcpy(pajaros[3].nombre,"Bolita");
    pajaros[3].fec.dia=5;
    pajaros[3].fec.mes=3;
    pajaros[3].fec.anyo=2017;
    
    tam=4;
}


void introducirCanario(TCanarios pajaros , int &tam){

    

    if(tam >= MAX) {
    
        cout << " No caben mas pajaros en la casita " << endl;
    }
    
    else {
        
        cout << " Nombre del canario: ";
        cin.ignore();
        cin.getline(pajaros[tam].nombre,10);
        
        cout << " Fecha de adquisicion " << endl;
        
        do{
        
        cout << " Dia: ";
        cin >> pajaros[tam].fec.dia;
        
        }while(pajaros[tam].fec.dia < 1 || pajaros[tam].fec.dia > 31);
        
        do{
        
            cout << " Mes: ";
            cin >> pajaros[tam].fec.mes;
        
         }while(pajaros[tam].fec.mes < 1 || pajaros[tam].fec.dia > 12);
        
        do{
        
            cout << " Año: ";
            cin >> pajaros[tam].fec.anyo;
        
         }while(pajaros[tam].fec.anyo < 1990 || pajaros[tam].fec.dia > 2021);
        
        tam++;
    }
    
    cout << "*************************************** " << endl;
}




void mostrarCanario(TCanarios pajaros , int tam){

    

    for (int i=0; i < tam ; i++){
        
        cout << i + 1 << "."<< " ";
        cout << pajaros[i].nombre;
        cout << " " << pajaros[i].fec.dia << "-";
        cout << pajaros[i].fec.mes << "-";
        cout << pajaros[i].fec.anyo;
        
        cout << endl;
        
    }
    
    cout << "*********************************" << endl;
}
