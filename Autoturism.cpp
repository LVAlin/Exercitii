#include "Autoturism.h"
#include <iostream>

Autoturism::Autoturism(const std::string combustibil, const std::string caroserie,const std::string tractiune, int putere,const std::string echipare, int* vin)
	: Automobil( combustibil, caroserie, tractiune, putere, echipare, vin) {
		//verifica daca numarul maxim de obiecte a fost atins
		if (numarObiecte < numarMaximObiecte){
			numarObiecte++;
		}else{
			std::cout << "Nu se mai poate crea un alt obiect numarul maxim a fost atins." << std::endl;
		}
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

//functia pentru setarea numarului maxim de obiecte
void Autoturism::seteazaNumarMaximObiecte(int limita){
	numarMaximObiecte = limita;
}

//initializare variabile
int Autoturism::numarMaximObiecte = 1;
int Autoturism::numarObiecte = 0;

Autoturism::~Autoturism() {
	std::cout << "Apelare Destructor Autoturism" << std::endl;
}
