#pragma once
#include "Automobil.h"
#include <memory>

class Autoutilitara : public Automobil {
public:
	//Autoutilitara( std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, std::unique_ptr<int> vin);
	Autoutilitara(std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, std::shared_ptr<int> vin);
	void afiseazaInfo() const ;
	~Autoutilitara();
};