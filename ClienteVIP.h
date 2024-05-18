#ifndef CLIENTEVIP_H_INCLUDED
#define CLIENTEVIP_H_INCLUDED

#include "Cliente.h"
#include "TipoTarjeta.h"

class ClienteVIP : public Cliente{
    private:
        string numeroTarjeta;
        TipoTarjeta *tipoTarjeta;
    public:
        ClienteVIP();

        //por qué da error? no comprendo :(
        ClienteVIP(int ID, string n, string a, string nT, TipoTarjeta *tT) : Cliente(ID, n, a){
            this -> numeroTarjeta = nT;
            this -> tipoTarjeta = tT;
        }
        void setNumeroTarjeta(string nT){
            this -> numeroTarjeta = nT;
        }
        string getNumeroTarjeta(){
            return this -> numeroTarjeta;
        }
        void setTipoTarjeta(TipoTarjeta *tT){
            this -> tipoTarjeta = tT;
        }
        TipoTarjeta *getTipoTarjeta(){
            return this -> tipoTarjeta;
        }
        tipoCliente getTipoCliente(){
            return tipoCliente::CLIENTE_VIP;
        }
};

#endif // CLIENTEVIP_H_INCLUDED
