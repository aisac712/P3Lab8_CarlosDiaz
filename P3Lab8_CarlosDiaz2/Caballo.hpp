#ifndef CABALLO_HPP
#define CABALLO_HPP

#include "Pieza.hpp"
#include <math.h>

class Caballo : public Pieza{
public:
    Caballo(){
        
    }
    Caballo(const Caballo& orig){
        
    }
    ~Caballo(){
        
    }
    
    virtual bool validarMovimiento(string coor, char** tablero){
        bool permitido=false;
        int i = -(coor.at(2)-48-8);                                     //posInicial
        int j = coor.at(1)-65;
        
        int x = -(coor.at(5)-48-8);                                     //posFinal
        int y = coor.at(4)-65;
        
        if(fabs(i-x)==2 && fabs(j-y)==1){
            permitido=true;
        }
        return permitido;
    }
private:
    
};

#endif /* CABALLO_HPP */

