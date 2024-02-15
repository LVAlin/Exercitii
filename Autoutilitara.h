#pragma once
#include "Automobil.h"

class Autoutilitara : public Automobil {
public:
	Autoutilitara( std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, int* vin);
	Autoutilitara(const Autoutilitara& other);
	Autoutilitara& operator=(const Autoutilitara& other); 
	void afiseazaInfo() const ;
	~Autoutilitara();
};