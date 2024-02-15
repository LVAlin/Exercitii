#pragma once
#include "Automobil.h"
#include <memory>

class Autoturism : public Automobil {
public:
	//Autoturism(std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, std::unique_ptr<int> vin);
	Autoturism(std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, std::shared_ptr<int> vin);
	void afiseazaInfo() const ;
	~Autoturism();
};