#pragma once
#include <string>

class Automobil {
protected:
	std::string Combustibil;
	std::string Caroserie;
	std::string Tractiune;
	int Putere;
	std::string Echipare;
	int* Vin;
public:
	Automobil(std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, int* vin);
	virtual ~Automobil();
	virtual void afiseazaInfo() const = 0;
};