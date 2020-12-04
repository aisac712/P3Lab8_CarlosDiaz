#ifndef PEON_HPP
#define PEON_HPP

#include "Pieza.hpp"
#include <math.h>

class Peon : public Pieza{
public:
    Peon(){
        
    }
    Peon(const Peon& orig){
        
    }
    ~Peon(){
        
    }
    
    virtual bool validarMovimiento(string coor, char** tablero){
        bool permitido=false;
        int i = -(coor.at(2)-48-8);                                     //posInicial
        int j = coor.at(1)-65;
        
        int x = -(coor.at(5)-48-8);                                     //posFinal
        int y = coor.at(4)-65;
        
        if(fabs(i-x)==1 && j==y){
            permitido = true;
        }
        if(i==x && fabs(j-y)==1){
            permitido = true;
        }
        return permitido;
    }
private:
    
};

#endif /* PEON_HPP */

