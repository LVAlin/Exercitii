#include <iostream>
#include "Autoturism.h"
#include "Autoutilitara.h"
#include "Automobil.h"

int main() {
	/*
	int* vinAutoturism = new int(123456); //VIN pentru masina autoturism
	Autoturism autoturism1("Benzina", "Berlina", "Fata", 130, "Standard", vinAutoturism);

	Autoturism autoturism2 = autoturism1;// Constructor de copiere

	Autoturism autoturism3("Benzina", "Break", "Spate", 110, "Full", new int(345678));
	autoturism3 = autoturism1; // Operator de atribuire

	autoturism1.afiseazaInfo();
	std::cout << "\n";
	autoturism2.afiseazaInfo();
	std::cout << "\n";
    autoturism3.afiseazaInfo();
	std::cout << "\n";
    */

	/* 
	int* vinAutoutilitara = new int(654321); //VIN pentru masina autoutilitara
	Autoutilitara autoutilitara1("Motorina", "Duba", "Spate", 150, "Full", vinAutoutilitara);

	Autoutilitara autoutilitara2 = autoutilitara1;// Constructor de copiere

	Autoutilitara autoutilitara3("Benzina", "Furgon", "Spate", 160, "Standard", new int(567891));
	autoutilitara3 = autoutilitara1; // Operator de atribuire

	autoutilitara1.afiseazaInfo();
	std::cout << "\n";
	autoutilitara2.afiseazaInfo();
	std::cout << "\n";
	autoutilitara3.afiseazaInfo();
	std::cout << "\n"; 
	*/

    int* vinAutoturism = new int(123456); //VIN pentru masina autoturism
	Autoturism autoturism("Benzina", "Berlina", "Fata", 130, "Standard", vinAutoturism);

	int* vinAutoutilitara = new int(654321); //VIN pentru masina autoutilitara
	Autoutilitara autoutilitara("Motorina", "Duba", "Spate", 150, "Full", vinAutoutilitara);

	autoturism.afiseazaInfo();
	std::cout << "\n";

    autoutilitara.afiseazaInfo();
	std::cout << "\n";

	return 0;
}