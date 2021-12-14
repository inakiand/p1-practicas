
// Progama para P1 Para Iñaki Vidal Alonso

#include <iostream>
#include <cstring>

using namespace std;

const int KPELICULA = 15;
const int KNOMBRE = 40;

typedef char Tcadena [KNOMBRE];

struct Thorarios{

    int sesion1;
    int sesion2;
    int sesion3;
    
};

struct Tbutacas{

    int butacas1;
    int butacas2;
    int butacas3;
    
};

struct Tpelis{
    
    Tbutacas butacas;
    Tcadena nombre;
    Thorarios hora;
    int codigo;
    
};

typedef Tpelis Tpeli [KPELICULA];



void asignarValores( Tpeli , int &);
void buscarValores( Tpeli,int &,int,int,int);




int main(){

    Tpeli peliculas;
    int codigo;
    int tam;
    int hora;
    int butacas;
    
       asignarValores(peliculas, tam);
    
    do{
    
        cout << "1." <<"  "<< "Durante la tormenta" << "   ";
        
        if( peliculas[0].butacas.butacas1 != 0 || peliculas[0].butacas.butacas1 < 0 ){
        
        cout << "   " << "15:00"<<"("<< peliculas[0].butacas.butacas1 << ")";
        
        }
        
        if( peliculas[0].butacas.butacas2 != 0 || peliculas[0].butacas.butacas2 < 0 ){
        
        cout << "   " << "17:30"<<"("<< peliculas[0].butacas.butacas2 << ")";
        
        }
        
        if( peliculas[0].butacas.butacas3 != 0 || peliculas[0].butacas.butacas3 < 0 ){
        
        cout << "   " << "19:30" << "("<< peliculas[0].butacas.butacas3  <<")";
        
        }
        
        cout << endl;
        cout << "2." << "  " << "Cadaver" << "   ";
        
        if( peliculas[1].butacas.butacas1 != 0 || peliculas[1].butacas.butacas1 < 0 ){
        
        cout << "   " << "16:00"<< "(" << peliculas[1].butacas.butacas1 << ")" ;
        
        }
        
        if( peliculas[1].butacas.butacas2 != 0 || peliculas[1].butacas.butacas2 < 0  ){
        
        cout << "   " << "18:30"<< "(" << peliculas[1].butacas.butacas2 << ")" ;
        
        }
        
        if( peliculas[1].butacas.butacas3 != 0 || peliculas[1].butacas.butacas3 < 0 ){
        
        cout << "   " << "19:30"<< "(" << peliculas[1].butacas.butacas3 << ")";
        
        }
        
        cout << endl;
        cout << "3." <<"  " << "Bohemian Rapsody" << "  ";
        
        if( peliculas[2].butacas.butacas1 != 0 || peliculas[2].butacas.butacas1 < 0) {
        
        cout << "   " << "15:00" << "("<< peliculas[2].butacas.butacas1 << ")";
        
        }
        
        if( peliculas[2].butacas.butacas2 != 0 || peliculas[2].butacas.butacas2 < 0 ){
        
        cout << "   " << "17:30"<<"(" << peliculas[2].butacas.butacas2 << ")" ;
        
        }
        
        if( peliculas[2].butacas.butacas3 != 0 || peliculas[2].butacas.butacas3 < 0) {
        
        cout << "   " << "19:30" << "(" << peliculas[2].butacas.butacas3 << ")";
        
        }
        
        cout << endl;
        cout << "4." <<"  " << "Viudas" ;
        
        if( peliculas[3].butacas.butacas1 != 0 || peliculas[3].butacas.butacas1 < 0 ){
        
        cout << "   " << " 21:00 " << "(" << peliculas[3].butacas.butacas1 << ")" << endl;
        
        }
        
        cout << endl;
        
        cout << "Pulse 0 para salir " << endl;
        cout << "Teclee código + hora + número de entradas para comprar: " << endl;
        
        cin >> codigo >> hora >> butacas;
        
        cout << endl;
       
       buscarValores(peliculas,tam,codigo,hora,butacas);

    }while(codigo != 0);
    
    
}



void asignarValores( Tpeli peliculas , int &tam){

    strcpy(peliculas[0].nombre,"Durante la tormenta");
    
    peliculas[0].hora.sesion1 = 15;
    peliculas[0].hora.sesion2 = 17;
    peliculas[0].hora.sesion3 = 19;
    peliculas[0].butacas.butacas1 = 30;
    peliculas[0].butacas.butacas2 = 25;
    peliculas[0].butacas.butacas3 = 3;
    peliculas[0].codigo = 1;
    
    
    strcpy(peliculas[1].nombre,"Cadaver");
    
    peliculas[1].hora.sesion1 = 16;
    peliculas[1].hora.sesion2 = 18;
    peliculas[1].hora.sesion3 = 19;
    peliculas[1].butacas.butacas1 = 10;
    peliculas[1].butacas.butacas2 = 5;
    peliculas[1].butacas.butacas3 = 15;
    peliculas[1].codigo = 2;
    
    strcpy(peliculas[2].nombre,"Bohemian Rapsody");
    
    peliculas[2].hora.sesion1 = 15;
    peliculas[2].hora.sesion2 = 17;
    peliculas[2].hora.sesion3 = 19;
    peliculas[2].butacas.butacas1 = 20;
    peliculas[2].butacas.butacas2 = 2;
    peliculas[2].butacas.butacas3 = 7;
    peliculas[2].codigo = 3;
    
    strcpy(peliculas[3].nombre,"Durante la tormenta");
    
    peliculas[3].hora.sesion1 = 21;
    peliculas[3].butacas.butacas1 = 80;
    peliculas[3].codigo = 4;
    
    tam = 4;
    
}
    
void buscarValores( Tpeli peliculas , int &tam , int codigo , int hora ,  int butacas){


    if(codigo == 1){
    
        for(int i = 0; i < 1;i++){
        
            if(hora == 15){
            
                if(butacas >  peliculas[0].butacas.butacas1 && butacas >  peliculas[0].butacas.butacas2 && butacas > peliculas[0].butacas.butacas3)
                
                    cout << "No hay suficientes butacas " << endl;
                 
                else
                
                  peliculas[0].butacas.butacas1 -= butacas;
            
            }
                  
            if(hora == 17){
            
                if(butacas > peliculas[0].butacas.butacas1 && butacas >  peliculas[0].butacas.butacas2 && butacas > peliculas[0].butacas.butacas3)
                
                    cout << "No hay suficientes butacas " << endl;
                 
                else
                
                  peliculas[0].butacas.butacas2 -= butacas;
            }
                  
            if(hora == 19){
            
                if(butacas >  peliculas[0].butacas.butacas3 && butacas >  peliculas[0].butacas.butacas2 && butacas > peliculas[0].butacas.butacas3)
                
                    cout << "No hay suficientes butacas " << endl;
                 
                else
                
                  peliculas[0].butacas.butacas3 -= butacas;
                  
            }
            
              if( hora != 15 && hora != 17 && hora !=19){
            
                cout << "No hay una pase a esa hora " << endl;
              }
        
            }
        }
                    
    
        if(codigo == 2){
    
        for(int i = 1 ; i < 2;i++){
        
            if(hora == 16){
            
                if(butacas >  peliculas[1].butacas.butacas1 && butacas >  peliculas[1].butacas.butacas2 && butacas > peliculas[1].butacas.butacas3)
                
                    cout << "No hay suficientes butacas " << endl;
                 
                else
                
                  peliculas[1].butacas.butacas1 -= butacas;
            
            }
                  
            if(hora == 18){
            
                if(butacas >  peliculas[1].butacas.butacas1 && butacas >  peliculas[1].butacas.butacas2 && butacas > peliculas[1].butacas.butacas3)
                
                    cout << "No hay suficientes butacas " << endl;
                 
                else
                
                  peliculas[1].butacas.butacas2 -= butacas;
            }
                  
            if(hora == 19){
            
                if(butacas > peliculas[1].butacas.butacas1 && butacas >  peliculas[1].butacas.butacas2 && butacas > peliculas[1].butacas.butacas3)
                
                    cout << "No hay suficientes butacas " << endl;
                 
                else
                
                  peliculas[1].butacas.butacas3 -= butacas;
                  
            }
            
            if( hora != 16 && hora != 18 && hora !=19){
            
                cout << "No hay una pase a esa hora " << endl;
            }
        
        }
        }
                    
           
        if(codigo == 3){
    
        for(int i = 2 ; i < 3;i++){
        
            if(hora == 15){
            
                if(butacas >  peliculas[2].butacas.butacas1 && butacas >  peliculas[2].butacas.butacas2 && butacas > peliculas[2].butacas.butacas3)
                
                    cout << "No hay suficientes butacas " << endl;
                 
                else
                
                  peliculas[2].butacas.butacas1 -= butacas;
            
            }
                  
            if(hora == 17){
            
                if(butacas >  peliculas[2].butacas.butacas1 && butacas >  peliculas[2].butacas.butacas2 && butacas > peliculas[2].butacas.butacas3)
                
                    cout << "No hay suficientes butacas " << endl;
                 
                else
                
                  peliculas[2].butacas.butacas2 -= butacas;
            }
                  
            if(hora == 19){
            
                if(butacas >  peliculas[2].butacas.butacas1 && butacas >  peliculas[2].butacas.butacas2 && butacas > peliculas[2].butacas.butacas3)
                
                    cout << "No hay suficientes butacas " << endl;
                 
                else
                
                  peliculas[2].butacas.butacas3 -= butacas;
                  
            }
            
              if( hora != 16 && hora != 18 && hora !=19){
            
                cout << "No hay una pase a esa hora " << endl;
              }
        }
        }
          
        if(codigo == 4){
    
        for(int i = 1 ; i < 2;i++){
        
            if(hora == 21){
            
                if(butacas  >  peliculas[3].butacas.butacas1)
                
                    cout << "No hay suficientes butacas " << endl;
                 
                else
                
                  peliculas[3].butacas.butacas1 -= butacas;
            
                }
            
              if( hora != 21 ){
            
                cout << "No hay una pase a esa hora " << endl;
            
              }
            }
        }
    
    if( codigo != 1 && codigo !=2 && codigo !=3 && codigo !=4 && codigo !=0){
    
    cout << " El codigo de esa pelicula no se encuentra en la cartelera " << endl;
    
    if(codigo == 0)
    
}
}

             
                    
                    
                    
                    
                    
                    
                    
    
        
    
    
    
    
    
    
    
    
    
    