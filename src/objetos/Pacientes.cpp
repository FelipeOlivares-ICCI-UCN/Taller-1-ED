#include "Pacientes.hpp"

Paciente::Paciente(string ID, string Nombre, string edad, string Servicio) {
    this->ID = ID;
    this->Nombre = Nombre;
    this->edad = edad;
    this->Servicio = Servicio;
}

string Paciente::getServicio() const { return this->Servicio; }

ostream& operator<<(ostream& o, const Paciente& p) {
    o << p.ID << " - " << p.Nombre;
    return o;
}


