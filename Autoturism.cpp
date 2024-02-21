#include "Autoturism.h"
#include <iostream>
#include <string>
#include <memory>
#include <mutex>

Autoturism::Autoturism(const std::string combustibil, const std::string caroserie,const std::string tractiune, int putere,const std::string echipare, int* vin)
	: Automobil( combustibil, caroserie, tractiune, putere, echipare, vin) {
		std::cout << "Apelare Constructor Autoturism" << std::endl;
}


void Autoturism::afiseazaInfo() const {
	std::cout << "Tip automobil : Autoturism" << std::endl;
    std::cout << "Combustibil: " << Combustibil << std::endl;
	std::cout << "Caroserie: " << Caroserie << std::endl;
	std::cout << "Tractiune: " << Tractiune << std::endl;
	std::cout << "Putere: " << Putere << " CP " << std::endl;
	std::cout << "Echipare: " << Echipare << std::endl;
	std::cout << "VIN: " << *Vin << std::endl;
}

Autoturism::~Autoturism() {
	std::cout << "Apelare Destructor Autoturism" << std::endl;
}
