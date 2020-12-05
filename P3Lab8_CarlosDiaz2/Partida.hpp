#ifndef PARTIDA_HPP
#define PARTIDA_HPP

#include <string>
using std::string;
using std::to_string;

#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <fstream>
using std::ofstream;

class Partida{
public:
    Partida(){
    }
    
    Partida(string nombrePartida, string auxiliar){
        this->nombrePartida = nombrePartida;
        this->auxiliar = auxiliar;
    }
    
    Partida(const Partida& orig){
        
    }
    ~Partida(){
        
    }
    
    void anadirMovimiento(string mov){
        movimientos.push_back(mov);
    }
    
    void guardarPartida(){
        string datosGuardar="";
                                                        //cout << "GUARDANDO PARTIDA" << endl;
        datosGuardar += nombrePartida+"\n";             //cout << nombrePartida << endl;
        datosGuardar += auxiliar+"\n";                  //cout << auxiliar << endl;
        string movimientosString="";
        for(int i=0; i<movimientos.size(); i++){
            movimientosString += movimientos.at(i) + ";";
        }
        datosGuardar += movimientosString+"\n";         //cout << movimientosString << endl;
                                                        //cout << "" << endl;
        
        escritura.open("bitacoraPartidas.txt", std::ofstream::out | std::ofstream::app);
        escritura << datosGuardar;
        escritura.close();
        
        cout << "PARTIDA GUARDADA EXITOSAMENTE" << endl;
        cout << "" << endl;
    }
    
    void setNombrePartida(string nombre){
        this->nombrePartida = nombre;
    }
    
    string getNombrePartida(){
        return this->nombrePartida;
    }
    
    void setAuxiliar(string auxiliar){
        this->auxiliar = auxiliar;
    }
    
    string getAuxiliar(){
        return this->auxiliar;
    }
    
    string getMovimientos(){
        string movimientosString="";
        for(int i=0; i<movimientos.size(); i++){
            movimientosString += movimientos.at(i) + " ";
        }
        return movimientosString;
    }
private:
    vector<string> movimientos;
    string nombrePartida;
    string auxiliar;
    
    
    ofstream escritura;
    
};

#endif /* PARTIDA_HPP */

