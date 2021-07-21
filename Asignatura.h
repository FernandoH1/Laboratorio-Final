#ifndef ASIGNATURA_H
#define ASIGNATURA_H

#include<iostream>
#include "TimeStamp.h"

using namespace std;

class Asignatura{
private:	//Atributos
	string codigo;
	string nombre;
	TipoClase tipoC;
	
public:	//Metodos
	
	Asignatura(){} //Costructor por defecto
	~Asignatura(){} //Destructor por defecto
	
	Asignatura(string codigo, string nombre, TipoClase tipoC) //Constructor por Asignacion
	{
		this->codigo = codigo;
		this->nombre = nombre;
		this->tipoC = tipoC;
	}
//------------------------------------------------------------------------------
	int getCodigo(){
		return codigo;
	}
//------------------------------------------------------------------------------
	string getNombre(){
		return nombre;
	}
//------------------------------------------------------------------------------
	TipoClase getTipoClase(){
		return tipoC;
	}
//------------------------------------------------------------------------------

};
#endif
