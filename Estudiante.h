#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include<iostream>

using namespace std;

class Estudiante : public Usuario{
private:	//Atributos
	string CI;
	string Asignatura;
	bool habilitado;
	
	
public:	//Metodos
	
	Estudiante(){} //Costructor por defecto
	~Estudiante(){} //Destructor por defecto
	
	Estudiante(string CI,string Asignatura,bool habilitado): Usuario(Nombre,Email,ImagenDePerfil,Password) //Constructor por Asignacion
	{
		this->CI = CI;
		this->Asignatura = Asignatura;
		this->habilitado = habilitado;
	}
//------------------------------------------------------------------------------
	string getCI(){
		return CI;
	}
//------------------------------------------------------------------------------		
	string getAsignatura(){
		return Asignatura;
	}	
//------------------------------------------------------------------------------
	bool getEstudianteH(){
		return habilitado;
	}
//------------------------------------------------------------------------------
};

#endif
