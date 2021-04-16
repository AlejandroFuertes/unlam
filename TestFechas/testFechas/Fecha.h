#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    public:
        Fecha();
        Fecha(int dia, int mes, int anio);
        Fecha sumarDias(int dias) const;

    private:
        unsigned long diaRel;
};

#endif // FECHA_H
