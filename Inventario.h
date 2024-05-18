#ifndef INVENTARIO_H_INCLUDED
#define INVENTARIO_H_INCLUDED

#include "Item.h"
#include "iProductoInventario.h"

class Inventario{
    private:
        int idInventario;
        Item *item;
        int existencia;
    public:
        Inventario();
        Inventario(int idIn, Item *ite, int exi){
            this -> idInventario = idIn;
            this -> item = ite;
            this -> existencia = exi;
        }
        int getIdInventario(){
            return this -> idInventario;
        }
        Item *getItem(){
            return this -> item;
        }
        int getExistencia(){
            return this -> existencia;
        }
        bool comprobarExistencia(int cE){
            return (this -> existencia >= cE);
        }
        bool actualizarExistencia(int aE){
            if(aE > 0 && aE <= this -> existencia){
                this -> existencia -= aE;
                return true;
            }
            return false;
        }
};

#endif // INVENTARIO_H_INCLUDED
