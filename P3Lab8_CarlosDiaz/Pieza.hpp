#ifndef PIEZA_HPP
#define PIEZA_HPP

class Pieza {
public:
    Pieza();
    Pieza(const Pieza& orig);
    virtual ~Pieza();
    
    virtual bool validarMovimiento(string, char**);
private:

};

#endif /* PIEZA_HPP */

