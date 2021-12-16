// Programa para  el examen de P1 por Iñaki Vidal Alonso

#include <iostream>
#include <cstring>
#include <time.h>


using namespace std;

const int KNOMBRE = 20;
const int KDESCRIPCION = 200;
const int KPERSONAJE = 5;

typedef char Tcadena [KNOMBRE];
typedef char Tdescripcion [KDESCRIPCION];

struct Tcontadores{

int cv;
int cs;
long ce;
int cen;

};

struct Tpersonaje{

Tcontadores cont;
Tcadena nombre;
Tdescripcion descripcion;
int v;
int s;
};

typedef Tpersonaje Tpersonajes [KPERSONAJE];


void introPerso(Tpersonajes,int &);
void altaPerso( Tpersonajes,int &);
void seleccionPerso(Tpersonajes,Tpersonajes,int &);
void recogerPerso(Tpersonajes,Tpersonajes,int &);
void actualizarContadores(Tpersonajes,Tpersonajes,int &);


int main(){

    Tpersonajes personaje;
    Tpersonajes elegido;
    int opcion;
    int tam = 0;

    do{
        
        cout << "***** EL VIDEOJUEGO DE IÑAKI ***** " << endl;
        cout << "1. Dar de alta un personaje " << endl;
        cout << "2. Seleccionar personaje " << endl;
        cout << "3. Recoger semilla y energia con el personaje seleccionado " << endl;
        cout << "4. Actualizar personaje seleccionado " << endl;
        cout << "5. Salir " << endl;
        cout << "Opción: ";
        cin >> opcion;
        
        switch(opcion){
        
            case 1:
            
                altaPerso(personaje,tam);
            
            break;
            
            case 2:
            
                seleccionPerso(personaje,elegido,tam);
            
            break;
            
            case 3:
            
                recogerPerso(personaje,elegido,tam);
            
            break;
            
            case 4:
            
                actualizarContadores(personaje,elegido,tam);
            
            break;
            
            case 5:
                
                cout << "***** EL VIDEOJUEGO DE IÑAKI ***** " << endl;
                cout << "Gracias por Jugar a este intrepido juego " << endl;
            
            break;
            
            default:
                
                cout << "***** EL VIDEOJUEGO DE IÑAKI ***** " << endl;
                cout << "La opción introducida no se encuentra en el menu , vuelva a introducirla " << endl;
                
        }
        
    }while(opcion !=5);

    return 0;
    
}


void introPerso(Tpersonajes personaje , int &tam){
    
    cout << "***** INTODUCIR PERSONAJE *****" << endl;
    
    cout << "Nombre del personaje: ";
    cin.ignore();
    cin.getline(personaje[tam].nombre,KNOMBRE);
    
    cout << "Descripción del personaje: ";
    cin.ignore();
    cin.getline(personaje[tam].descripcion,KDESCRIPCION);
    
    cout << "Introduce las Stats del personaje: " << endl;
    
    do{
    
        cout << "Vida: ";
        cin >> personaje[tam].v;
    
    }while( personaje[tam].v < 0 ||  personaje[tam].v > 10);
    
    cout << "Experiencia: ";
    cin >> personaje[tam].cont.ce;
    
    cout << "Semillas: ";
    cin >> personaje[tam].cont.cs;
    
    cout << "Energia: ";
    cin >> personaje[tam].cont.cen;
    
}

void altaPerso( Tpersonajes personaje , int &tam){

    if (tam > KPERSONAJE){

        cout << "La lista de personajes esta llena " << endl;
    }
    else{
        
        introPerso(personaje ,tam);
        tam++;
    }
}

void seleccionPerso(Tpersonajes personaje ,Tpersonajes elegido ,int &tam){

    int i;
    int pos;
    int comparacion;
    
    pos = -1;
    
    cout << "***** SELECCIONAR PERSONAJE *****" << endl;

    cout << "Introduce el personaje que quieres seleccionar ";
    cin.ignore();
    cin.getline(elegido[0].nombre,KNOMBRE);
    
    for ( i = 0; i < tam; i++){
    
        comparacion = strcmp(elegido[0].nombre,personaje[i].nombre);
        
            if(comparacion == 0){
        
                cout << "Personaje seleccionado: " << personaje[i].nombre << endl;
                cout << "Descripción: " << personaje[i].descripcion << endl;
                cout << "Stats del personaje: " << endl;
                cout << "Vida: " << personaje[i].v << endl;
                cout << "Experiencia: " << personaje[i].cont.ce << endl;
                cout << "Semillas: "<< personaje[i].cont.cs << endl;
                cout << "Energia: " << personaje[i].cont.cen << endl;
            
                pos = i;
        
            }
    }
    
    if (pos == -1){
    
        cout << " El personaje no se encuentra en nuestra lista " << endl;
    }    
}
    
    
void recogerPerso( Tpersonajes personaje ,Tpersonajes elegido ,int &tam){

       int comparacion;
       int i;
       char opcion;
       int pos = -1;
       
       cout << "***** AVENTURA DEL PERSONAJE *****" << endl;
       
       for(i=0; i < tam; i++){
       
        comparacion = strcmp(elegido[0].nombre,personaje[i].nombre);
        
            if(comparacion == 0){
            
                do{
                
                    cout << "Quieres cojer semillas o energia? (S/E) ";
                    cin >> opcion;
                
                }while(opcion != 'S' && opcion != 'E');
                
                
                    if ( opcion == 'S'){
                
                    cout << "Cuantas semilla quieres coger? ";
                    cin >> personaje[i].s;
                    
                    }
                    
                    else if ( opcion == 'E'){
                    
                    cout << "Cuanta energia quieres coger? ";
                    cin >> personaje[i].cont.cen;
                    
                    }
                    
                    pos = i;
            }
    }   

    if(pos == -1)
    
        cout << "Parece que no tienes ningun personaje seleccionado " << endl;

}
                

void actualizarContadores(Tpersonajes personaje ,Tpersonajes elegido ,int &tam){

       int comparacion;
       int i;
       int pos = -1;
       
       cout << "***** ACTUALIZAR PERSONAJES *****" << endl;
       
       for(i=0; i < tam; i++){
       
        comparacion = strcmp(elegido[0].nombre,personaje[i].nombre);
        
            if(comparacion == 0){
            
            personaje[i].cont.cs += personaje[i].s;
            
                if(personaje[i].cont.cen >= 10){
                    
                    do{
                    
                        personaje[i].cont.cen -= 10;
                        
                        personaje[i].cont.ce =  personaje[i].cont.ce *  personaje[i].cont.ce ;
                        
                    }while(personaje[i].cont.cen >= 10);
    
                }
                
            pos = i;
            personaje[i].s = 0;
        }
            
            
      
       }
       
            
       if(pos == -1){
       
       cout << "No hay nada para actualizar " << endl;
       
       }
       
       
       else if(pos != -1){
       
        cout << "Personaje actualizado correctamente " << endl;
        
       }
       
}
