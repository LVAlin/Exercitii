#pragma once
#include "Automobil.h"

class Autoturism : public Automobil {
public:
	Autoturism(std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, int* vin);
	void afiseazaInfo() const ;
	~Autoturism();
};