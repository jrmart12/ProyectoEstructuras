#include "archivo.h"

Archivo::Archivo(char * nombre, bool nuevo)
{
    this->nombre = nombre;
    if(nuevo){
        file = fopen(nombre, "w");
        fclose(file);
    }
}

char * Archivo::Read(int pos, int longitud){
    abrir();
    char * data = new char[longitud];
    fseek(file, pos, SEEK_SET);
    fread(data, 1, longitud, file);

    return data;
}

void Archivo::Write(int pos, char * data, int longitud){
    abrir();
    fseek(file, pos, SEEK_SET);
    fwrite(data, 1, longitud, file);
    cerrar();
}

void Arhivo::Open(){
    file = fopen(nombre, "r+");
}

void Archivo::cerrar(){
    fclose(file);
}

void Archivo::setTam(int pos){
    abrir();
    fseek(file, pos, SEEK_SET);
    fputc('\0', file);
    cerrar();
}
