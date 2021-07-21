#ifndef DOCENTE_H
#define DOCENTE_H

#include<iostream>

using namespace std;

class Docente : public Usuario{
private:	//Atributos
	string NombreInstituto;
	
	
public:	//Metodos
	
	Docente(){} //Costructor por defecto
	~Docente(){} //Destructor por defecto
	
	Docente(string NombreInstituto): Usuario(Nombre,Email,ImagenDePerfil,Password) //Constructor por Asignacion
	{
		this->NombreInstituto = NombreInstituto;
	}
//------------------------------------------------------------------------------
	string getNombreInstituto(){
		return NombreInstituto;
	}
//------------------------------------------------------------------------------		
};

#endif
