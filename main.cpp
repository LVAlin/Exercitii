#include <iostream>
#include "Autoturism.h"
#include "Autoutilitara.h"
#include "Automobil.h"
#include <memory>
// unique pointer si shared pointer sunt mult mai buni decat raw pointer deoarece memoria este gestionata automat.
// diferenta intre unique si shared este ca unique pointer este detinator unic pentru un obiect iar shared pointer poate fi partajat.
int main() {
	//unique pointer
	//std::unique_ptr<int> vinAutoturism = std::make_unique<int>(123456); //VIN pentru masina autoturism folosind unique pointer
	//Automobil* autoturism = new Autoturism("Benzina", "Berlina", "Fata", 130, "Standard", std::move(vinAutoturism));
	
	//std::unique_ptr<int> vinAutoutilitara = std::make_unique<int>(654321); //VIN pentru masina autoutilitara folosind unique pointer
	//Automobil* autoutilitara = new Autoutilitara("Motorina", "Duba", "Spate", 150, "Full", std::move(vinAutoutilitara));

	//shared pointer
	std::shared_ptr<int> vinAutoturism = std::make_shared<int>(123456); //VIN pentru masina autoturism folosind shared pointer
	Automobil* autoturism = new Autoturism("Benzina", "Berlina", "Fata", 130, "Standard", vinAutoturism);

	std::shared_ptr<int> vinAutoutilitara = std::make_shared<int>(654321); //VIN pentru masina autoutilitara folosind shared pointer
	Automobil* autoutilitara = new Autoutilitara("Motorina", "Duba", "Spate", 150, "Full", vinAutoutilitara);

	autoturism->afiseazaInfo();
	std::cout << "\n";
	autoutilitara->afiseazaInfo();
	
	delete autoturism;
	delete autoutilitara;

	return 0;
}