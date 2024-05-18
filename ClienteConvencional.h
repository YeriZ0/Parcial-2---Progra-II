#ifndef CLIENTECONVENCIONAL_H_INCLUDED
#define CLIENTECONVENCIONAL_H_INCLUDED

#include "Cliente.h"

class ClienteConvencional : public Cliente{
    private:
        string email;
    public:
        ClienteConvencional();

        //por qué da error? no comprendo :(
        ClienteConvencional(int ID, string n, string a, string ema) : Cliente(ID, n, a){
            this -> email = ema;
        }
        void setEmail(string ema){
            this -> email = ema;
        }
        string getEmail(){
            return this -> email;
        }
        tipoCliente getTipoCliente(){
            return tipoCliente::ClIENTE_CONVENCIONAL;
        }
};

#endif // CLIENTECONVENCIONAL_H_INCLUDED
