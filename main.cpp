#include <iostream>
#include "Autoturism.h"
#include "Autoutilitara.h"
#include "Automobil.h"

int main() {
	int* vinAutoturism = new int(123456); //VIN pentru masina autoturism
	Automobil* autoturism = new Autoturism("Benzina", "Berlina", "Fata", 130, "Standard", vinAutoturism);
	
	int* vinAutoutilitara = new int(654321); //VIN pentru masina autoutilitara
	Automobil* autoutilitara = new Autoutilitara("Motorina", "Duba", "Spate", 150, "Full", vinAutoutilitara);

	autoturism->afiseazaInfo();
	std::cout << "\n";
	autoutilitara->afiseazaInfo();
	
	delete autoturism;
	delete autoutilitara;

	return 0;
}