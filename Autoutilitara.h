#pragma once
#include "Automobil.h"

class Autoutilitara : public Automobil {
public:
	Autoutilitara( std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, int* vin);
	void afiseazaInfo() const ;
	~Autoutilitara();
};