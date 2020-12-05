#include <cstdlib>
#include <iostream>
#include <vector>           //librería estándar de los vectores
#include <string>           //librería estándar de las cadenas

#include "Partida.hpp"
#include "Pieza.hpp"

#include "Rey.hpp"
#include "Dama.hpp"
#include "Torre.hpp"
#include "Alfil.hpp"
#include "Caballo.hpp"
#include "Peon.hpp"

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
bool validarEntrada(string);

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
                int nPieza=1;
                string nombre="";
                string nombreAuxiliar="";
                tablero = crearTablero(8);
                imprimirTablero(8, tablero);
                cout << "¿Cuál es el nombre de la partida?: ";
                cin >> nombre;
                
                cout << "¿Con cuál pieza querés practicar?: " << endl;
                cout << "1. Dama    2. Torre    3. Alfil    4. Caballo    5.Peón: " << endl;
                cin >> nPieza;
                while(nPieza<1 || nPieza>5)                               //validar q sea una pieza
                    cin >> nPieza;
                
                Pieza* auxiliar;
                if(nPieza==1){                                            //crear la pieza auxiliar
                    auxiliar = new Dama();
                    nombreAuxiliar = "Dama";
                    tablero[7][3] = 'r';
                    tablero[0][3] = 'Q';
                }
                else if(nPieza==2){
                    auxiliar = new Torre();
                    nombreAuxiliar = "Torre";
                    tablero[7][0] = 't';
                    tablero[0][7] = 'T';
                }
                else if(nPieza==3){
                    auxiliar = new Alfil();
                    nombreAuxiliar = "Alfil";
                    tablero[7][2] = 'a';
                    tablero[0][5] = 'B';
                }
                else if(nPieza==4){
                    auxiliar = new Caballo();
                    nombreAuxiliar = "Caballo";
                    tablero[7][1] = 'c';
                    tablero[0][6] = 'H';
                }
                else if(nPieza==5){
                    auxiliar = new Peon();
                    nombreAuxiliar = "Peón";
                    tablero[6][4] = 'p';
                    tablero[1][4] = 'P';
                }
                
                Pieza* rey = new Rey();                                              //crear el rey
                tablero[7][4] = 'r';
                tablero[0][4] = 'K';
                
                Partida* partidaTemp = new Partida(nombre, nombreAuxiliar);
                
                bool seguir=true;
                while(seguir){
                    nPieza=0;
                    string coordenada;
                    cout << "JUGADOR 1" << endl;
                    imprimirTablero(8, tablero);                                                                        //USAR COORDENADAS EN MAYúSCULA
                    cout << "¿Cuál pieza desea mover?  1. Rey   2. " << nombreAuxiliar<< " : ";
                    cin >> nPieza;
                    cout << "Ingresa coordenadas de movimiento (mayusc): " << endl;
                    cin >> coordenada;
                    while(!validarEntrada(coordenada)){
                        cout << "Coordenada no válida, ingrese otra";
                        cin >> coordenada;
                    }
                    int i = -(coordenada.at(2)-48-8);                                     //posInicial
                    int j = coordenada.at(1)-65;

                    int x = -(coordenada.at(5)-48-8);                                     //posFinal
                    int y = coordenada.at(4)-65;
                        
                    if(nPieza==1){
                        while(!rey->validarMovimiento(coordenada, tablero)){
                            cout << "El " << "Rey" << " no puede hacer ese movimiento. Ingresa otra coordenada: " << endl;
                            cin >> coordenada;
                            i = -(coordenada.at(2)-48-8);                                     //posInicial
                            j = coordenada.at(1)-65;
                            x = -(coordenada.at(5)-48-8);                                     //posFinal
                            y = coordenada.at(4)-65;
                        }
                        tablero[i][j] = '.';
                        tablero[x][y] = 'r';
                        imprimirTablero(8, tablero);
                    } else if(nPieza==2){
                        while(!auxiliar->validarMovimiento(coordenada, tablero)){
                            cout << "El " << nombreAuxiliar << " no puede hacer ese movimiento. Ingresa otra coordenada: " << endl;
                            cin >> coordenada;
                            i = -(coordenada.at(2)-48-8);                                     //posInicial
                            j = coordenada.at(1)-65;
                            x = -(coordenada.at(5)-48-8);                                     //posFinal
                            y = coordenada.at(4)-65;
                        }
                        tablero[i][j] = '.';
                        tablero[x][y] = nombreAuxiliar.at(0);
                        imprimirTablero(8, tablero);
                    }
                    
                    cout << "JUGADOR 2" << endl;
                    imprimirTablero(8, tablero);
                    cout << "¿Cuál pieza desea mover?  1. Rey   2. " << nombreAuxiliar<< " : ";
                    cin >> nPieza;
                    cout << "Ingresa coordenadas de movimiento (mayusc): " << endl;
                    cin >> coordenada;
                    while(!validarEntrada(coordenada)){
                        cout << "Coordenada no válida, ingrese otra";
                        cin >> coordenada;
                    }
                    i = -(coordenada.at(2)-48-8);                                     //posInicial
                    j = coordenada.at(1)-65;
                    x = -(coordenada.at(5)-48-8);                                     //posFinal
                    y = coordenada.at(4)-65;
                        
                    if(nPieza==1){
                        while(!rey->validarMovimiento(coordenada, tablero)){
                            cout << "El " << "Rey" << " no puede hacer ese movimiento. Ingresa otra coordenada: " << endl;
                            cin >> coordenada;
                            i = -(coordenada.at(2)-48-8);                                     //posInicial
                            j = coordenada.at(1)-65;
                            x = -(coordenada.at(5)-48-8);                                     //posFinal
                            y = coordenada.at(4)-65;
                        }
                        tablero[i][j] = '.';
                        tablero[x][y] = 'r';
                        imprimirTablero(8, tablero);
                    } else if(nPieza==2){
                        while(!auxiliar->validarMovimiento(coordenada, tablero)){
                            cout << "El " << nombreAuxiliar << " no puede hacer ese movimiento. Ingresa otra coordenada: " << endl;
                            cin >> coordenada;
                            i = -(coordenada.at(2)-48-8);                                     //posInicial
                            j = coordenada.at(1)-65;
                            x = -(coordenada.at(5)-48-8);                                     //posFinal
                            y = coordenada.at(4)-65;
                        }
                        tablero[i][j] = '.';
                        tablero[x][y] = nombreAuxiliar.at(0);
                        imprimirTablero(8, tablero);
                    }
                    cout << "¿Desea seguir? (1. Sí,  0. No): ";
                    cin >> seguir;
                }
                
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
            cout << to_string(8-i) << " ";
            for(int j=0; j<size; j++){
                cout << tablero[i][j] << " ";
            }
            cout << "" << endl;
            if(i==7){
                cout << "  A "  << "B " << "C " << "D " <<"E " << "F " << "G "<<"H ";
            }
        }
        cout << "" << endl;
    }
}

bool validarEntrada(string coor){
    bool valido=false;
    if(coor.size()==7 && coor.at(0)=='[' && coor.at(6)==']' && coor.at(3)==','){
        if(coor.at(1)>=65 && coor.at(1)<=72 && coor.at(4)>=65 && coor.at(4)<=72){
            if(coor.at(2)>=49 && coor.at(2)<=57 && coor.at(5)>=49 && coor.at(5)<=57)
                valido=true;
        }
    }
    return valido;
}