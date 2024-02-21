#include "Autoutilitara.h"
#include <iostream>
#include <string>

Autoutilitara::Autoutilitara( const std::string combustibil, const std::string caroserie, const std::string tractiune, int putere, const std::string echipare, int* vin)
	: Automobil( combustibil, caroserie, tractiune, putere, echipare, vin) {      
	std::cout << "Apelare Constructor Autoutilitara" << std::endl;
}
Autoutilitara::Autoutilitara(const Autoutilitara& other)//Constructor de copiere
	:Automobil(other){}

Autoutilitara& Autoutilitara::operator=(const Autoutilitara& other)//Operator de atribuire
{
	if (this != &other) {
		Automobil::operator=(other);
	}
	return *this;
}

Autoutilitara::Autoutilitara(Autoutilitara&& other)
	:Automobil(std::move(other)){}

Autoutilitara& Autoutilitara::operator=(Autoutilitara&& other)
{
	if (this != &other) {
		Automobil::operator=(std::move(other));
	}
	return *this;
}

void Autoutilitara::afiseazaInfo() const {
	std::cout << "Tip automobil: Autoutilitara" << std::endl;
	std::cout << "Combustibil: " << Combustibil << std::endl;
	std::cout << "Caroserie: " << Caroserie << std::endl;
	std::cout << "Tractiune: " << Tractiune << std::endl;
	std::cout << "Putere: " << Putere << " CP " << std::endl;
	std::cout << "Echipare: " << Echipare << std::endl;
	std::cout << "VIN: " << *Vin << std::endl;
}
Autoutilitara::~Autoutilitara() {
	std::cout << "Apelare Destructor Autoturism " << std::endl;
}