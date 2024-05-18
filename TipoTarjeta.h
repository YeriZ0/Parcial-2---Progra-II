#ifndef TIPOTARJETA_H_INCLUDED
#define TIPOTARJETA_H_INCLUDED

class TipoTarjeta{
    private:
        int idTipo;
        string nombre;
        float porcentajeDescuento;
    public:
        TipoTarjeta();
        TipoTarjeta(int idT, string n, float pD){
            this -> idTipo = idT;
            this -> nombre = n;
            this -> porcentajeDescuento = pD;
        }
        void setIdTipo(int idT){
            this -> idTipo = idT;
        }
        int getIdTipo(){
            return this -> idTipo;
        }
        void setNombre(string n){
            this -> nombre = n;
        }
        string getNombre(){
            return this -> nombre;
        }
        void setPorcentajeDescuento(float pD){
            this -> porcentajeDescuento = pD;
        }
        float getPorcentajeDescuento(){
            return this -> porcentajeDescuento;
        }
};


#endif // TIPOTARJETA_H_INCLUDED
