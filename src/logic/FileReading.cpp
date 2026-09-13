#pragma once
#include "FileReading.hpp"


void readFileData(const string& filename, Queue<Paciente>& pacientes) {

    std::ifstream file(filename);

    if (!file.is_open()) {
        cerr << "File Not Found!" << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        std::stringstream ss(line);

        string ID;
        string name;
        string age;
        string service;

        std::getline(ss, ID, ';');
        std::getline(ss, name, ';');
        std::getline(ss, age, ';');
        std::getline(ss, service, ';');

        Paciente paciente = Paciente(ID, name, age, service);
        pacientes.push(paciente);

    }

}
