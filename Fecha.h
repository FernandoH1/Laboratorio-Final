#ifndef FECHA_H
#define FECHA_H

#include<ctime>

class Fecha{
	
private:	//Atributos
	int dia = 0;
	int mes = 0;
	int anio = 0;
	
public:	//Operaciones
	
	Fecha(){} //Contructor por defecto
	
	~Fecha(){} //Destructor
	
	Fecha(int dia, int mes, int anio){	//Constructor por asignacion
		this->dia = dia;
		this->mes = mes;
		this->anio = anio;
	}
//------------------------------------------------------------------------------	
	int getDia(){
		return dia;
	}
//------------------------------------------------------------------------------
	int getMes(){
		return mes;
	}
//------------------------------------------------------------------------------
	int getAnio(){
		return anio;
	}
//------------------------------------------------------------------------------
	void FechaSistema(){

		//Primero Creamos la Fecha Actual
		time_t now = time(0);
		tm * time = localtime(&now); 

		//Dias del mes desde el 1 al 31
		dia = time->tm_mday;

		//Meses del año desde el 0 al 11
		mes = 1 + time->tm_mon;

		//Años desde despues de 1900
		anio = 1900 + time->tm_year;
	}
//------------------------------------------------------------------------------
};
#endif
