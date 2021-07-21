#ifndef MENSAJE_H
#define MENSAJE_H

#include<iostream>
#include "TimeStamp.h"

using namespace std;

class Mensaje{
private:	//Atributos
	int ID;
	string texto;
	TimeStamp fecha;
	
public:	//Metodos
	
	Mensaje(){} //Costructor por defecto
	~Mensaje(){} //Destructor por defecto
	
	Mensaje(int ID, string texto, TimeStamp fecha) //Constructor por Asignacion
	{
	this->ID = ID;
	this->texto = texto;
	this->fecha = fecha;
	}
//------------------------------------------------------------------------------
	int getID(){
		return ID;
	}
//------------------------------------------------------------------------------
	string getTexto(){
		return texto;
	}
//------------------------------------------------------------------------------
	TimeStamp getFecha(){
		return fecha;
	}
//------------------------------------------------------------------------------
};
#endif
