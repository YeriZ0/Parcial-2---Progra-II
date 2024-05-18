#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

#include <string>
#include "tipoItem.h"

using namespace std;

class Item{
    protected:
        int idItem;
        string nombreItem;
    public:
        Item(){
            this -> idItem = 0;
            this -> nombreItem;
        }
        Item(int iI, string nI){
            this -> idItem = iI;
            this -> nombreItem = nI;
        }
        int getIdItem(){
            return this -> idItem;
        }
        string getNombreItem(){
            return this -> nombreItem;
        }
        virtual float getPrecio() = 0;
        virtual tipoItem getTipoItem() = 0;
};

#endif // ITEM_H_INCLUDED
