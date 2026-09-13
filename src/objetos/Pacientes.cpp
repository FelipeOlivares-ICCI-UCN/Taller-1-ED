#include "Pacientes.hpp"
#include <iostream>

Paciente::Paciente(string ID, string Nombre, string edad, string Servicio) {
    this->ID = ID;
    this->Nombre = Nombre;
    this->edad = edad;
    this->Servicio = Servicio;
}

string Paciente::getServicio() const { return this->Servicio; }

