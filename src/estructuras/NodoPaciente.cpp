#include "NodoPaciente.hpp"

NodoPaciente::NodoPaciente(Paciente *paciente) {
    this->paciente_ = paciente;
    this->next_ = nullptr;
}

Paciente *NodoPaciente::getPaciente() const {
    return this->paciente_;
}

void NodoPaciente::setPaciente(Paciente *paciente) {
    this->paciente_ = paciente;
}

NodoPaciente *NodoPaciente::getNext() const { return this->next_; }

void NodoPaciente::setNext(NodoPaciente* next) {
    this->next_ = next;
}


