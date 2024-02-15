#include "Autoutilitara.h"
#include <iostream>
#include <memory>

//Autoutilitara::Autoutilitara( const std::string combustibil, const std::string caroserie, const std::string tractiune, int putere, const std::string echipare, std::unique_ptr<int> vin)
//	: Automobil( combustibil, caroserie, tractiune, putere, echipare, std::move(vin)) {
Autoutilitara::Autoutilitara(const std::string combustibil, const std::string caroserie, const std::string tractiune, int putere, const std::string echipare, std::shared_ptr<int> vin)
		: Automobil(combustibil, caroserie, tractiune, putere, echipare, vin) {
	std::cout << "Apelare Constructor Autoutilitara" << std::endl;
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