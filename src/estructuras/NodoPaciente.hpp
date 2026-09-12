#pragma once

#include "../objetos/Pacientes.hpp"

class NodoPaciente {
private:
    Paciente* paciente_;
    NodoPaciente* next_;
public:
    NodoPaciente(Paciente* paciente);

    Paciente* getPaciente() const;
    NodoPaciente* getNext() const;

    void setPaciente(Paciente* paciente);

    void setNext(NodoPaciente* next);

};