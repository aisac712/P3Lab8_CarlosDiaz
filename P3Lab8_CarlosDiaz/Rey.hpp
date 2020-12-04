#ifndef REY_HPP
#define REY_HPP

#include "Pieza.hpp"


class Rey : public Pieza{
public:
    Rey();
    Rey(const Rey& orig);
    virtual ~Rey();
    
    virtual bool validarMovimiento(string, char**);
private:

};

#endif /* REY_HPP */

