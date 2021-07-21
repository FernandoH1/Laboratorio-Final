#ifndef CLASE_H
#define CLASE_H

#include "enum.h"
#include "TimeStamp.h"
#include<iostream>


using namespace std;

class Clase{
private:	//Atributos
	int id;
	string NombreAsignatura;
	TipoClase TipoC;
	TimeStamp fecha_inicio;
	TimeStamp fecha_fin;
	Mensaje* mensaje[100];
	string URL;
	
public:	//Metodos
	
	Clase(){} //Costructor por defecto
	~Clase(){} //Destructor por defecto
	
	Clase() //Constructor por Asignacion
	{
		
	}
	
//------------------------------------------------------------------------------	
	string getTipoClase(){
		switch(this->TipoC)
		{
		case Teorico:
			return "Teorico";
			break;
		case Practico:
			return "Practico";
			break;
		case Monitoreo:
			return "Monitoreo";
			break;
		}
		return NULL;
	}
//------------------------------------------------------------------------------
	TimeStamp getFechayHora(){
		return fecha_inicio;
	}
//------------------------------------------------------------------------------
};

#endif
