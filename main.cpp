#include <iostream>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

#include "ClienteConvencional.h"
#include "ClienteVIP.h"
#include "Producto.h"
#include "Servicio.h"
#include "Venta.h"
#include "Item.h"

#define VENTA 50
#define PRODUCTO 50

using namespace std;

char menu(){
    char op;

    cout << "******** Sistema de Ventas ******** \n" << endl;
    cout << "\t1. Agregar cliente " << endl;
    cout << "\t2. Agregar Producto o Servicio " << endl;
    cout << "\t3. Realizar venta " << endl;
    cout << "\t4. Muestra la Lista de Clientes" << endl;
    cout << "\t5. Muestra la Lista de Productos" << endl;
    cout << "\t6. Muestra la Lista de Ventas" << endl;
    cout << "\t7. Buscar venta con No de Factura" << endl;
    cout << "\t8. Cerrar programa... \n" << endl;

    cout << " -> "; cin >> op;

    return op;

}

//No pude encontrar por qué no pasa la compilación

Cliente *agregarCliente(){
    Cliente *cli;

    int cod, tipoC, idTT;
    float pDesc;
    string nom, ape, ema, numT, nomT;

    cout << "\n*********** DATOS DEL CLIENTE *********** \n" << endl;
    cout << "Cree un codigo : "; cin >> cod;
    cout << "Digite el nombre : "; cin >> nom;
    cout << "Digite el apellido : "; cin >> ape;
    cout << "\n¿Qué tipo de cliente es?" << endl;
    cout << "\t1. Cliente Convencional" << endl;
    cout << "\t2. Cliente VIP" << endl;
    cout << " -> "; cin >> tipoC;

    do{
        if(tipoC == 1){
            ///cliente convencional
            cout << "\nIngrese un email : "; cin >> ema;
            cli = new ClienteConvencional(cod, nom, ape, ema);
        }else if(tipoC == 2){
            ///cliente VIP
            cout << "\nIngrese el numero de tarjeta : "; cin >> numT;
            TipoTarjeta *tipTarj;
            cout << "Tipos de tarjetas: " << endl;
            cout << "\t1. 10% de descuento - Bronce" << endl;
            cout << "\t2. 20% de descuento - Plata" << endl;
            cout << "\t3. 30% de descuento - Oro" << endl;
            cout << " -> "; cin >> idTT;
            if(idTT == 1){
                nomT = "Bronce";
                pDesc = 0.10;
            }else if(idTT == 2){
                nomT = "Plata";
                pDesc = 0.20;
            }else if(idTT == 3){
                nomT = "Oro";
                pDesc = 0.30;
            }
            tipTarj = new TipoTarjeta(idTT,nomT, pDesc);
            cli = new ClienteVIP(cod, nom, ape, numT, tipTarj);
        }else{
            cout << "Seleccione un tipo de cliente valido.";
        }
    }while(tipoC < 1 && tipoC > 2);

    return cli;
}

void mostrarCliente(Cliente *cliente[], int contCli){
    for(int i = 0; i < contCli; i++){
        cout << cliente[i] -> getIdCliente() << endl;
        cout << cliente[i] -> getNombre() << endl;
        cout << cliente[i] -> getApellido() << endl;
        cout << cliente[i] -> getTipoCliente();
        }

}

int main(){
    setlocale(LC_ALL, "");

    int contCli = 0;
    Cliente *cliente[LIST];
    Item *items[PRODUCTO];
    Venta *venta[VENTA];

    char opMenu;

    do{
        system("cls");
        opMenu = menu();
        switch(opMenu){
            case '1':
                if(contCli < LIST){
                    cliente[contCli] = agregarCliente();
                    contCli++;
                    cout << "El cliente se agregó exitosamente." << endl;
                }
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                mostrarCliente(cliente, contCli);
                break;
            case '5':
                break;
            case '6':
                break;
            case '7':
                break;
            case '8':
                cout << "\nCerrando el programa..." << endl;
                break;
        }
        system("pause");
    }while(opMenu != '8');

    return 0;
};
