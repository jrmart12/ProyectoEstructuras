#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <stdio.h>

class Archivo
{
    public:
        Archivo(char * nombre, bool nuevo);
        char * Read(int pos, int longitud);
        void Write(int pos, char * data, int longitud);

        void Open();
        void cerrar();
        void setTam(int pos);

        FILE * file;
        char * nombre;
};

#endif // ARCHIVO_H
