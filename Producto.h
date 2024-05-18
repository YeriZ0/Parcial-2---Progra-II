#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

#include "Item.h"

class Producto : public Item{
    private:
        float precioUnitario;
    public:
        Producto();
        Producto(int idI, string nI, float pU) : Item(idI, nI){
            this -> precioUnitario = pU;
        }
        float getPrecio(){
            return this -> precioUnitario;
        }
        tipoItem getTipoItem(){
            return tipoItem::PRODUCTO;
        }
};

#endif // PRODUCTO_H_INCLUDED
