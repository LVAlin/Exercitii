#include "Singleton.h"
#include <iostream>
#include <string>
#include <memory>
#include <mutex>

AbstractFactory& FactorySingleton::getInstance(){
    //Se verifica daca nu exista instanta
    if (!factory) {
        std::lock_guard<std::mutex> lock(mutex); //se blocheaza accesul
        if(!factory) { // se verifica iar dupa blocare
            factory = std::make_unique<AutoturismFactory>();
            factory = std::make_unique<AutoutilitaraFactory>();
        }
    }
    return *factory;

}
//Initializarea membrilor statici
std::unique_ptr<AbstractFactory> FactorySingleton::factory;
std::mutex FactorySingleton::mutex;
