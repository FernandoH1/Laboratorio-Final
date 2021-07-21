#ifndef USUARIO_H
#define USUARIO_H

#include<iostream>

using namespace std;

class Usuario{
private:	//Atributos
	string Nombre;
	string Email;
	string ImagenDePerfil;
	string Password;
	
	
public:	//Metodos
	
	Usuario(){} //Costructor por defecto
	~Usuario(){} //Destructor por defecto
	
	Usuario(string Nombre,string Email,string ImagenDePerfil,string Password) //Constructor por Asignacion
	{
		this->Nombre = Nombre;
		this->Email = Email;
		this->ImagenDePerfil = ImagenDePerfil;
		this->Password = Password;
	}
//------------------------------------------------------------------------------
	string getNombre(){
		return Nombre;
	}
//------------------------------------------------------------------------------
	string getEmail(){
		return Email;
	}
//------------------------------------------------------------------------------
	string getImagenDePerfil(){
		return ImagenDePerfil;
	}
//------------------------------------------------------------------------------
	string getPassword(){
		return Password;
	}
//------------------------------------------------------------------------------
	
};

#endif
