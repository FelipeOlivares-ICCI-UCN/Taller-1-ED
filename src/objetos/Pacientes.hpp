#pragma once

#include <string>
using namespace std;

class Paciente {
private:
        string ID, Nombre, Servicio, edad;
public:
        Paciente(string ID, string Nombre, string edad, string Servicio);

        string getServicio() const;

        void mostrarPaciente() const;
};