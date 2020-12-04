#ifndef PIEZA_HPP
#define PIEZA_HPP

#include <string>           //librería estándar de las cadenas
using std::string;
using std::to_string;
#include <vector>           //librería estándar de los vectores
using std::vector;


class Pieza {
public:
    Pieza(){
        
    }
    Pieza(const Pieza& orig){
        
    }
    ~Pieza(){
        
    }
    
    virtual bool validarMovimiento(string coordenada, char** tablero){
        
    }
private:
    
};

#endif /* PIEZA_HPP */

