#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED

#include "Item.h"

class Servicio : public Item{
    private:
        float montoServicio;
    public:
        Servicio();
        Servicio(int idI, string nI, float ser) : Item(idI, nI){
            this -> montoServicio = ser;
        }
        float getPrecio(){
            return this -> montoServicio;
        }
        tipoItem getTipoItem(){
            return tipoItem::SERVICIO;
        }
};

#endif // SERVICIO_H_INCLUDED
