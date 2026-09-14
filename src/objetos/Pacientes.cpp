#include "Pacientes.hpp"

Paciente::Paciente(string ID, string Nombre, string edad, string Servicio) {
    this->ID = ID;
    this->Nombre = Nombre;
    this->edad = edad;
    this->Servicio = Servicio;
}

string Paciente::getServicio() const { return this->Servicio; }

ostream& operator<<(ostream& o, const Paciente& p) {
    o << p.ID << " - " << p.Nombre << " (" << p.edad << ")";
    return o;
}

void Paciente::showFullInformation() const {
        std::cout << "--------------------" << std::endl;
        std::cout << "ID: " << this->ID << endl;
        std::cout << "Nombre: " << this->Nombre << endl;
        std::cout << "Edad: " << this->edad << endl;
        std::cout << "Servicio: " << this->Servicio << endl;

    }






