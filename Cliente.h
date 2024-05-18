#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include <string>
#include "tipoCliente.h"

using namespace std;

class Cliente{
    protected:
        int idCliente;
        string nombre;
        string apellido;
    public:
        Cliente();
        Cliente(int ID, string n, string a){
            this -> idCliente = ID;
            this -> nombre = n;
            this -> apellido = a;
        }
        void setIdCliente(int ID){
            this -> idCliente = ID;
        }
        int getIdCliente(){
            return this -> idCliente;
        }
        void setNombre(string n){
            this -> nombre = n;
        }
        string getNombre(){
            return this -> nombre;
        }
        void setApellido(string a){
            this -> apellido = a;
        }
        string getApellido(){
            return this -> apellido;
        }
        virtual tipoCliente getTipoCliente() = 0;

};

#endif // CLIENTE_H_INCLUDED
