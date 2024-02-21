#include <iostream>
#include "Autoturism.h"
#include "Autoutilitara.h"
#include "Automobil.h"

int main() {
	Autoturism::seteazaNumarMaximObiecte(1);

	int* vinAutoturism = new int(123456); //VIN pentru masina autoturism
	Automobil* autoturism = new Autoturism("Benzina", "Berlina", "Fata", 130, "Standard", vinAutoturism);

	int* vinAutoturism1 = new int(234567); //VIN pentru masina autoturism
	Automobil* autoturism1= new Autoturism("Benzina", "Break", "Spate", 120, "Full", vinAutoturism1);

	//int* vinAutoturism2 = new int(234567); //VIN pentru masina autoturism
	//Automobil* autoturism2= new Autoturism("Motorina", "Cabrio", "Spate", 190, "Full", vinAutoturism2);

	autoturism->afiseazaInfo();
	std::cout << "\n";
	autoturism1->afiseazaInfo();
	std::cout << "\n";
	//autoturism2->afiseazaInfo();
	//std::cout << "\n";
	
	int* vinAutoutilitara = new int(654321); //VIN pentru masina autoutilitara
	Automobil* autoutilitara = new Autoutilitara("Motorina", "Duba", "Spate", 150, "Full", vinAutoutilitara);

	autoutilitara->afiseazaInfo();
	std::cout << "\n";
	
	delete autoturism;
	delete autoutilitara;

	return 0;
}