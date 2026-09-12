#pragma once

#include <string>
using namespace std;

class Paciente {
private:
        string ID, Nombre, Servicio;
        int edad;
public:
        Paciente(string ID, string Nombre, int edad, string Servicio);
};