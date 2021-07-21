#ifndef TIMESTAMP_H
#define TIMESTAMP_H

#include<ctime>
#include "Fecha.h"
#include<iostream>

using namespace std;

class TimeStamp{
	
private:	//Atributos
	Fecha* fecha = NULL;
	int sec = 0;
	int min = 0;
	int hora = 0;
	
public:	//Operaciones
	
	TimeStamp(){} //Contructor por defecto
	
	~TimeStamp(){} //Destructor
	
	TimeStamp(Fecha* fecha){	//Constructor por asignacion
		this->fecha = fecha;
		
		//Primero Creamos la Fecha Actual
		time_t now = time(0);
		tm * time = localtime(&now); 
		
		//Segundos de 0 a 60
		sec = time->tm_sec;
		
		//Minuto de 0 a 60
		min = time->tm_min;
		
		//Hora de 0 a 24
		hora = time->tm_hour;
	}
//------------------------------------------------------------------------------	
	int getSec(){
		return sec;
	}
//------------------------------------------------------------------------------
	int getMin(){
		return min;
	}
//------------------------------------------------------------------------------
	int getHora(){
		return hora;
	}
//------------------------------------------------------------------------------
	void MostrarFechaYHora(){
		cout<<"Hora: "<<hora<<":"<<min<<":"<<sec<<endl;
		cout<<"Fecha: "<<fecha->getDia()<<"/"<<fecha->getMes()<<"/"<<fecha->getAnio()<<endl;
		
	}
//------------------------------------------------------------------------------
};

#endif
