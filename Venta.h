#ifndef VENTA_H_INCLUDED
#define VENTA_H_INCLUDED

#define LIST 5

#include "Cliente.h"
#include "Item.h"

class Venta{
    private:
        int noFactura;
        Cliente *cliente;
        Item *itemsVendidos[LIST];
        int *cantItemVendidos[LIST];
        int contItemVendidos;
        float totalDescuento;
        float totalVenta;
    public:
        Venta(){
            this -> noFactura = 0;
            this -> contItemVendidos = 0;
            this -> totalDescuento = 0;
            this -> totalVenta = 0;
        }
        Venta(int nF, Cliente *c){
            this -> noFactura = nF;
            this -> cliente = c;
        }
         int getNoFactura(){
            return this -> noFactura;
        }
        Cliente *getCliente(){
            return this -> cliente;
        }
        void agregarItem(Item *item, int cant){
            if (contItemVendidos < LIST) {
                itemsVendidos[contItemVendidos] = item;
                cantItemVendidos[contItemVendidos] = new int(cant);
                contItemVendidos++;
            } else {
                cout << "No hay espacio suficiente para agregar más items." << endl;
            }
        }
        Item **getItemVendidos(){
            return this -> itemsVendidos;
        }
        int **getCantItemVendidos(){
            return this -> cantItemVendidos;
        }
        int getContItemVendidos(){
            return this -> contItemVendidos;
        }
        float getTotalVenta(){
            return this -> totalVenta;
        }
        float getTotalDescuento(){
            return this -> totalDescuento;
        }

};

#endif // VENTA_H_INCLUDED
