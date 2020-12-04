#ifndef PARTIDA_H
#define PARTIDA_H
#include <string>           //librería estándar de las cadenas
using std::string;
using std::to_string;
#include <vector>           //librería estándar de los vectores
using std::vector;


class Partida {
public:
    Partida();
    Partida(const Partida& orig);
    virtual ~Partida();
    
    void guardarPartida();
private:
    vector<string*> movimientos;
};

#endif /* PARTIDA_H */

