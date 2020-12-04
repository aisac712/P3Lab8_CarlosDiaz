#ifndef ALFIL_HPP
#define ALFIL_HPP

#include "Pieza.hpp"
#include <math.h>


class Alfil : public Pieza{
public:
    Alfil(){
        
    }
    Alfil(const Alfil& orig){
        
    }
    ~Alfil(){
        
    }
    
    virtual bool validarMovimiento(string coor, char** tablero){
        bool permitido=false;
        int i = -(coor.at(2)-48-8);                                     //posInicial
        int j = coor.at(1)-65;
        
        int x = -(coor.at(5)-48-8);                                     //posFinal
        int y = coor.at(4)-65;
        
        if(fabs(i-x)==fabs(j-y)){
            permitido = true;
        }
        return permitido;
    }
private:
    
};

#endif /* ALFIL_HPP */

