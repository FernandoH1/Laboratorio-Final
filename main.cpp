#include<iostream>
#include "TimeStamp.h"
#include "Clase.h"


using namespace std;

int main (int argc, char *argv[]) {

	Fecha* fecha = new Fecha();
	fecha->FechaSistema();
	
	TimeStamp* t = new TimeStamp(fecha);
	t->MostrarFechaYHora();
	
	return 0;
}

