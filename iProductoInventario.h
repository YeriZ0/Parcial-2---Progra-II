#ifndef IPRODUCTOINVENTARIO_H_INCLUDED
#define IPRODUCTOINVENTARIO_H_INCLUDED

class iProductoInventario{
    public:
        virtual bool comprobarExistencia(int) = 0;
        virtual bool actualizarExistencia(int) = 0;
};

#endif // IPRODUCTOINVENTARIO_H_INCLUDED
