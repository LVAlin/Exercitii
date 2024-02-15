#include "Automobil.h"
#include <iostream>

Automobil::Automobil( std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, int* vin)
    : Combustibil(combustibil), Caroserie(caroserie), Tractiune(tractiune), Putere(putere), Echipare(echipare), Vin(vin) {
	 std::cout << "Apelare Constructor Automobil" << std::endl;
}
Automobil::Automobil(const Automobil& other)//Constructor de copiere
	: Combustibil(other.Combustibil), Caroserie(other.Caroserie), Tractiune(other.Tractiune), Putere(other.Putere), Echipare(other.Echipare)
{
	Vin = new int(*other.Vin);
}
Automobil& Automobil::operator=(const Automobil& other)//Operator de atribuire
{
	if (this != &other){
		delete Vin;
		Combustibil = other.Combustibil;
		Caroserie = other.Caroserie;
		Tractiune = other.Tractiune;
		Putere = other.Putere;
		Echipare = other.Echipare;
		Vin = new int(*other.Vin);
	}
	return *this;
}

Automobil::~Automobil() 
{
	std::cout << "~Automobil()" << std::endl;
	delete Vin;
}
