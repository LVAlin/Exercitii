#include <iostream>
#include "Autoturism.h"
#include "Autoutilitara.h"
#include "Automobil.h"
#include <vector>
#include "Utilitar.h"

int main() {
	int* vinAutoturism = new int(123456); //VIN pentru masina autoturism
	Automobil* autoturism = new Autoturism("Benzina", "Berlina", "Fata", 130, "Standard", vinAutoturism);
	
	int* vinAutoutilitara = new int(654321); //VIN pentru masina autoutilitara
	Automobil* autoutilitara = new Autoutilitara("Motorina", "Duba", "Spate", 150, "Full", vinAutoutilitara);

	autoturism->afiseazaInfo();
	std::cout << "\n";
	autoutilitara->afiseazaInfo();
	std::cout << "\n";

	Utilitar::printCustom("Aceasta este o functie statica de printare custom."); // Aceasta apeleaza o functie statica care afiseaza un mesaj utilitar

	// Apelarea functiei statice de calcul al mediei
	std::vector<int> numere = { 2, 4, 6, 8, 10};
	double medie = Utilitar::calculMedieUtilitar(numere);
	std::cout << "Media numerelor este: " << medie << std::endl;

	delete autoturism;
	delete autoutilitara;

	return 0;
}