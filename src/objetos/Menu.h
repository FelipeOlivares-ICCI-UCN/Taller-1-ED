#pragma once
#include "../estructuras/Queue.hpp"
#include "Pacientes.hpp"
#include "Hospital.h"


class Menu {
    private:
        int exitOption = 4;
        Queue<Paciente> &atencion;
        Hospital hospital;

    public:
        int currentOptionNum = 1;
        Menu(Queue<Paciente> &atencion): atencion(atencion) {};

        void startMenu();
        int userInput(int min, int max);
        void displayOptions();
        void attendPaciente(int numPacientes);


};