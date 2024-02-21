#include <iostream>
#include "Autoturism.h"
#include "Autoutilitara.h"
#include "Automobil.h"

int main() {
	int* vinAutoturism = new int(123456); //VIN pentru masina autoturism
	Automobil* autoturism = new Autoturism("Benzina", "Berlina", "Fata", 130, "Standard", vinAutoturism);
	autoturism->afiseazaInfo();
	std::cout << autoturism << "\n";
	std::cout << "\n";

	int* vinAutoturism1 = new int(234567); //VIN pentru masina autoturism
	autoturism->updateMembers("Benzina", "Break", "Spate", 120, "Full", vinAutoturism1);
	autoturism->afiseazaInfo();
	std::cout << autoturism << "\n";
	std::cout << "\n";
	
	//int* vinAutoutilitara = new int(654321); //VIN pentru masina autoutilitara
	//Automobil* autoutilitara = new Autoutilitara("Motorina", "Duba", "Spate", 150, "Full", vinAutoutilitara);

	//autoutilitara->afiseazaInfo();
	//std::cout << "\n";
	
	delete autoturism;
	//delete autoutilitara;

	return 0;
}