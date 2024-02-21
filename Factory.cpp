#include "Factory.h"
#include <iostream>
#include <string>
#include <memory>
#include <mutex>

AbstractFactory::~AbstractFactory(){}
std::unique_ptr<Automobil> AutoturismFactory::createAutomobil()
{
    int* vin = new int(123456);
	return std::make_unique<Autoturism>("Benzina", "Berlina", "Fata", 130, "Standard", vin);
}
std::unique_ptr<Automobil> AutoutilitaraFactory::createAutomobil()
{
    int* vin = new int(654321);
	return std::make_unique<Autoutilitara>("Motorina", "Duba", "Spate", 150, "Full", vin);
}