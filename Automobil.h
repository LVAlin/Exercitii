#pragma once
#include <string>
#include <memory>

class Automobil {
protected:
	std::string Combustibil;
	std::string Caroserie;
	std::string Tractiune;
	int Putere;
	std::string Echipare;
	//std::unique_ptr<int> Vin; //utilizam unique pointer pentru VIN ul masinii 
	std::shared_ptr<int> Vin; //utilizam shared pointer pentru VIN ul masinii 
public:
	//Automobil(std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, std::unique_ptr<int> vin);
	Automobil(std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, std::shared_ptr<int> vin);
	virtual ~Automobil();
	virtual void afiseazaInfo() const = 0;
};