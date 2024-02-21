#pragma once
#include "Automobil.h"
#include "Autoturism.h"
#include "Autoutilitara.h"
#include <iostream>
#include <string>
#include <memory>
#include <mutex>

class AbstractFactory {
public:
    virtual std::unique_ptr<Automobil> createAutomobil() = 0;
    virtual ~AbstractFactory();
};

class AutoturismFactory : public AbstractFactory {
public:
    std::unique_ptr<Automobil> createAutomobil();
};

class AutoutilitaraFactory : public AbstractFactory {
public:
    std::unique_ptr<Automobil> createAutomobil();
};
