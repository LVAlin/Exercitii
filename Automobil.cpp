#include "Automobil.h"
#include <iostream>

Automobil::Automobil( std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, int* vin)
    : Combustibil(combustibil), Caroserie(caroserie), Tractiune(tractiune), Putere(putere), Echipare(echipare), Vin(vin) {
	 std::cout << "Apelare Constructor Automobil" << std::endl;
}

void Automobil::updateMembers(std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, int* vin){
	Combustibil = combustibil;
	Caroserie = caroserie;
	Tractiune = tractiune;
	Putere = putere;
	Echipare = echipare;
	Vin = vin;
}
Automobil::~Automobil() 
{
	std::cout << "~Automobil()" << std::endl;
	delete Vin;
}
