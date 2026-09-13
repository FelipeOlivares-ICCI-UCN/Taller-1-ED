#pragma once
#include "../estructuras/Queue.hpp"
#include "../objetos/Pacientes.hpp"
#include <iostream>


class Menu {
    private:
        int exitOption = 4;
        Queue<Paciente> &Atencion;
    public:
        int currentOptionNum = 1;
        Menu(Queue<Paciente> &Atencion): Atencion(Atencion) {};

        void startMenu();
        int userInput();
        void displayOptions();



};