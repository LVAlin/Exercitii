#include "Automobil.h"
#include <iostream>
#include <string>
#include <memory>
#include <mutex>

Automobil::Automobil( std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, int* vin)
    : Combustibil(combustibil), Caroserie(caroserie), Tractiune(tractiune), Putere(putere), Echipare(echipare), Vin(new int(*vin)) {
	 std::cout << "Apelare Constructor Automobil" << std::endl;
}

Automobil::~Automobil() 
{
	std::cout << "~Automobil()" << std::endl;
	delete Vin;
}
