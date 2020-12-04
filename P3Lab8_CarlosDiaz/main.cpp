#include <cstdlib>
#include <iostream>
#include <vector>           //librería estándar de los vectores
#include <string>           //librería estándar de las cadenas

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::to_string;

using namespace std;

//TODO: PROTOTIPO DE FUNCIOES


int main(int argc, char** argv) {
    int op = 0;
    //vector<Partida> pRegistradas;                                  //almacena los usuarios registrados en el sistema
    
    
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
                
            } break;
            case 2: {
                
            } break;
            case 3: {
                
            } break;
        }
    }
            
    return 0;
}

