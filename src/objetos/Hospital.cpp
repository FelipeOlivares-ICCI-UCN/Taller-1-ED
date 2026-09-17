#include "Hospital.h"

Hospital::Hospital() {
    Departamentos.insertLast(Urgencias);
    Departamentos.insertLast(MedicinaGeneral);
    Departamentos.insertLast(Cardiologia);
    Departamentos.insertLast(Neurologia);
    Departamentos.insertLast(Traumatologia);
    Departamentos.insertLast(Cirugia);
    Departamentos.insertLast(Hospitalizacion);
    Departamentos.insertLast(Pediatria);
}

void Hospital::addPaciente(const Paciente& paciente) {
    paciente.showFullInformation();
    std::cout << "---------------------" << std::endl;
    std::cout << "Enviando a " << paciente.getServicio() << endl;

    if (paciente.getServicio() == "Urgencias") {
        Departamentos.get(0).insertLast(paciente);
        historial.push(paciente);

    }
    else if (paciente.getServicio() == "Medicina General") {
        Departamentos.get(1).insertLast(paciente);
        historial.push(paciente);
    }
    else if (paciente.getServicio() == "Cardiologia") {
        Departamentos.get(2).insertLast(paciente);
        historial.push(paciente);
    }
    else if (paciente.getServicio() == "Neurologia") {
        Departamentos.get(3).insertLast(paciente);
        historial.push(paciente);
    }

    else if (paciente.getServicio() == "Traumatologia") {
        Departamentos.get(4).insertLast(paciente);
        historial.push(paciente);
    }

    else if (paciente.getServicio() == "Cirugia") {
        Departamentos.get(5).insertLast(paciente);
        historial.push(paciente);
    }

    else if (paciente.getServicio() == "Hospitalizacion") {
        Departamentos.get(6).insertLast(paciente);
        historial.push(paciente);
    }

    else if (paciente.getServicio() == "Pediatria") {
        Departamentos.get(7).insertLast(paciente);
        historial.push(paciente);
    }

    else {
        std::cout << "Rechazado, Servicio desconocido: " << paciente.getServicio()  << std::endl;
    }
}

void Hospital::showPacientes(int depNum) {
    if (depNum < 1 || depNum > 8) {
        cerr << "That departament number doesnt exist" << endl;
        return;
    }

    if (depNum == 1) {
        cout << "=== Urgencias ===" << endl;
    }

    else if (depNum == 2) {
        cout << "=== Medicina General ===" << endl;
    }

    else if (depNum == 3) {
        cout << "=== Cardiologia ===" << endl;
    }
    else if (depNum == 4) {
        cout << "=== Neurologia ===" << endl;
    }
    else if (depNum == 5) {
        cout << "=== Traumatologia ===" << endl;
    }
    else if (depNum == 6) {
        cout << "=== Cirugia ===" << endl;
    }
    else if (depNum == 7) {
        cout << "=== Pediatria ===" << endl;
    }
    else if (depNum == 8) {
        cout << "=== Hospitalizacion ===" << endl;
    }


    cout << "Pacientes: " << Departamentos.get(depNum - 1).size() << endl;
    Departamentos.get(depNum - 1).printList();

}

void Hospital::showHistorial() {

    historial.show();
}





