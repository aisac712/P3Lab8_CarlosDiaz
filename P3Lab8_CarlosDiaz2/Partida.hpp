#ifndef PARTIDA_HPP
#define PARTIDA_HPP

#include <string>
using std::string;
using std::to_string;

#include <vector>
using std::vector;


class Partida{
public:
    Partida(string nombrePartida, string auxiliar){
        this->nombrePartida = nombrePartida;
        this->auxiliar = auxiliar;
    }
    
    Partida(const Partida& orig){
        
    }
    ~Partida(){
        
    }
    
    void guardarPartida(){
        
    }
private:
    vector<string*> movimientos;
    string nombrePartida;
    string auxiliar;
};

#endif /* PARTIDA_HPP */

