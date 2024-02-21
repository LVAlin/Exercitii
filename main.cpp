#include "Autoturism.h"
#include "Autoutilitara.h"
#include "Automobil.h"
#include "Factory.h"
#include "Singleton.h"
#include <iostream>
#include <string>
#include <memory>
#include <mutex>
int main() {
//Obtinem fabrica abstracta cu utilizarea singleton-ului
	AbstractFactory& factory = FactorySingleton::getInstance();

//Utilizand fabrica abstracta cream instante
	std::unique_ptr<Automobil> autoturism = factory.createAutomobil();
	std::unique_ptr<Automobil> autoutilitara = factory.createAutomobil();

//Afisam informatia
	autoturism->afiseazaInfo();
	std::cout << "\n";
	autoutilitara->afiseazaInfo();
	std::cout << "\n";
	
	return 0;
}