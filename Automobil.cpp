#include "Automobil.h"
#include <iostream>
#include <memory>

//Automobil::Automobil( std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, std::unique_ptr<int> vin)
//    : Combustibil(combustibil), Caroserie(caroserie), Tractiune(tractiune), Putere(putere), Echipare(echipare), Vin(std::move(vin)) {
Automobil::Automobil(std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, std::shared_ptr<int> vin)
		: Combustibil(combustibil), Caroserie(caroserie), Tractiune(tractiune), Putere(putere), Echipare(echipare), Vin(vin) {
	 std::cout << "Apelare Constructor Automobil" << std::endl;
}

Automobil::~Automobil()
{
	std::cout << "~Automobil()" << std::endl;
}
