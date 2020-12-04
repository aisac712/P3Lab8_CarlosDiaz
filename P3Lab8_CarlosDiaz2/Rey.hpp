#ifndef REY_HPP
#define REY_HPP

#include "Pieza.hpp"
#include <math.h>


class Rey : public Pieza{
public:
    Rey(){
        
    }
    Rey(const Rey& orig){
        
    }
    ~Rey(){
        
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
        if(fabs(i-x)==fabs(j-y)){
            permitido = true;
        }
        return permitido;
    }
private:
    
};

#endif /* REY_HPP */

