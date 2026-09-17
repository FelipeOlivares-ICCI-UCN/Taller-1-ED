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
    }
    else if (paciente.getServicio() == "Medicina General") {
        Departamentos.get(1).insertLast(paciente);
    }
    else if (paciente.getServicio() == "Cardiologia") {
        Departamentos.get(2).insertLast(paciente);
    }
    else if (paciente.getServicio() == "Neurologia") {
        Departamentos.get(3).insertLast(paciente);
    }

    else if (paciente.getServicio() == "Traumatologia") {
        Departamentos.get(4).insertLast(paciente);
    }

    else if (paciente.getServicio() == "Cirugia") {
        Departamentos.get(5).insertLast(paciente);
    }

    else if (paciente.getServicio() == "Hospitalizacion") {
        Departamentos.get(6).insertLast(paciente);
    }

    else if (paciente.getServicio() == "Pediatria") {
        Departamentos.get(7).insertLast(paciente);
    }

    else {
        std::cout << "Rechazado, Servicio desconocido: " << paciente.getServicio()  << std::endl;
    }


}

