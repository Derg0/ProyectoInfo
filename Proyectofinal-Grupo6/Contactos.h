#pragma once
#include <string>
#include <iostream>
class Contactos
{
private:
	std::string Nombres;
	std::string Apellidos; 
	std::string NivelAcademico;
	std::string TrabajoActual;
	std::string RedesSociales;
	std::string Nacionalidad;
	std::string Profesion;
	std::string CorreoElectronico;
	int numerotelefonico; 
	int extension;

public: 
	int contactos[500];
	void setNombres(std::string nombres) {
		this->Nombres = nombres;
	}
	void setapellidos(std::string apellido) {
		this->Apellidos = apellido;
	}
	void setNivelAcademico(std::string nivelAca) {
		this->NivelAcademico = nivelAca;
	}
	void setTrabajoActual(std::string trabajo) {
		this->TrabajoActual = trabajo;
	}
	void setRedesSociales(std::string redes) {
		this->RedesSociales = redes;
	}
	void setNacionalidad(std::string nacionalidad) {
		this->Nacionalidad = nacionalidad;
	}

	void setProfesion(std::string profesion) {
		this->Profesion = profesion;
	}
	void setCorreoElectronico(std::string correo) {
		this->CorreoElectronico = correo;
	}
	void setNumeroTelefonico(int numero) {
		this->numerotelefonico = numero;
	}
	

	std::string getnombres() {
		return this->Nombres;
	}
	std::string getApellidos() {
		return this->Apellidos;
	}
	std::string getnivelacademico() {
		return this->NivelAcademico;
	}
	std::string gettrabajoactual() {
		return this->TrabajoActual;
	}
	std::string getredessociales() {
		return this->RedesSociales;
	}
	std::string getnacionalidad() {
		return this->Nacionalidad;
	}
	std::string getprofesion() {
		return this->Profesion;
	}
	std::string getcorreoelectronico() {
		return this->CorreoElectronico;
	}
	int getnumerotelefonico() {
		return this->numerotelefonico;
	}
	

	void setextension(int ext) {
		this->extension = ext;
	}

	int getextension() {
		return this->extension;
	}


};

