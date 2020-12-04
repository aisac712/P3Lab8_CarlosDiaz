#include <cstdlib>
#include <iostream>
#include <vector>           //librería estándar de los vectores
#include <string>           //librería estándar de las cadenas

#include "Pieza.hpp"
#include "Partida.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::to_string;

using namespace std;

//TODO: PROTOTIPO DE FUNCIOES
char** crearTablero(int);
void imprimirTablero(int, char**);

int main(int argc, char** argv) {
    int op = 0;
    vector<Partida*> pRegistradas;                                  //almacena los usuarios registrados en el sistema
    
    
    while(op!=3){
        cout << "   FEISBU CRÍPTICO" << endl;
        cout << "1. Jugar Partida" << endl;
        cout << "2. Ver Partida" << endl;
        cout << "3. Salir" << endl;
        cout << "" << endl;
        cout << "Ingresa opción: ";
        cin  >> op;
        
        cout << "" <<  endl;
        switch(op){
            case 1: {
                char** tablero = NULL;
                int pieza=1;
                crearTablero(8);
                
                cout << "¿Con cuál pieza querés practicar?: " << endl;
                cout << "1. Dama    2. Torre    3. Alfil    4. Caballo    5.Peón: " << endl;
                cin >> pieza;
                while(pieza<1 || pieza>5)                               //validar q sea una pieza
                    cin >> pieza;
                
//                //Pieza auxiliar();
//                if(pieza==1)                                            //crear la pieza auxiliar
//                    Dama auxiliar();
//                else if(pieza==2)
//                    Torre auxiliar();
//                else if(pieza==3)
//                    Alfil auxiliar();
//                else if(pieza==4)
//                    Caballo auxiliar();
//                else if(pieza==2)
//                    Peon auxiliar();
//                
//                Rey rey();                                              //crear el rey
//                
//                Partida partida();
            } break;
            case 2: {
                
            } break;
            case 3: {
                
            } break;
        }
    }
            
    return 0;
}

char** crearTablero(int size){
    char** tablero = NULL;
    if(size>1){                                                                 //SAFE CODE
        tablero = new char*[size];                                //filas

        for(int i=0; i < size; i++){
            tablero[i] = new char[size];                          //columnas
        }
        
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                //matriz[i][j] = (-9) + rand()%((9+1) - (-9));
                tablero[i][j] = '.';
            }
        }
    }
    return tablero;
}

void imprimirTablero(int size, char** tablero){
    if(tablero!=NULL){                                                 //SAFE CODE
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                cout << std::to_string(tablero[i][j]) +"\t";
            }
            cout << "" << endl;
        }
    }
}