#include "../estructuras/Queue.hpp"
#include "../objetos/Pacientes.hpp"
#include <fstream>
#include <string>
#include <sstream>

void readFileData(const string& filename, Queue<Paciente> &Atencion);