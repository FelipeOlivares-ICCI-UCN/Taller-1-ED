#pragma once

#include <iostream>
#include <string>
using namespace std;

class Paciente {
private:
        string ID, Nombre, Servicio, edad;
public:
        Paciente(string ID, string Nombre, string edad, string Servicio);

        string getServicio() const;

        friend ostream& operator<<(ostream& o, const Paciente& p);
};
