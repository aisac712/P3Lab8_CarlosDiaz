#ifndef TORRE_HPP
#define TORRE_HPP

#include "Pieza.hpp"
#include <math.h>

class Torre : public Pieza{
public:
    Torre(){
        
    }
    Torre(const Torre& orig){
        
    }
    ~Torre(){
        
    }
    
    virtual bool validarMovimiento(string coor, char** tablero){
        bool permitido=false;
        int i = -(coor.at(2)-48-8);                                     //posInicial
        int j = coor.at(1)-65;
        
        int x = -(coor.at(5)-48-8);                                     //posFinal
        int y = coor.at(4)-65;
        
        if(i==x || j==y){
            permitido = true;
        }

        return permitido;
    }
private:
    
};

#endif /* TORRE_HPP */

