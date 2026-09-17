#pragma once

#include "../estructuras/LinkedList.h"
#include "../estructuras/Stack.h"
#include "Pacientes.hpp"

class Hospital {
private:
    LinkedList<LinkedList<Paciente>> Departamentos;
    LinkedList<Paciente> Urgencias;
    LinkedList<Paciente> MedicinaGeneral;
    LinkedList<Paciente> Cardiologia;
    LinkedList<Paciente> Neurologia;
    LinkedList<Paciente> Traumatologia;
    LinkedList<Paciente> Cirugia;
    LinkedList<Paciente> Pediatria;
    LinkedList<Paciente> Hospitalizacion;

    Stack<Paciente> historial;

public:
    Hospital();

    void addPaciente(const Paciente& paciente);

    void showPacientes(int depNum);

    void showHistorial();
};
