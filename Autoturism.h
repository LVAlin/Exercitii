#pragma once
#include "Automobil.h"

class Autoturism : public Automobil {
private:
static int numarObiecte;
static int numarMaximObiecte;
public:
	Autoturism(std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, int* vin);
	void afiseazaInfo() const ;
	static void seteazaNumarMaximObiecte(int limita);
	~Autoturism();
};