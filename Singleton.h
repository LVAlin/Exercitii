#pragma once
#include "Factory.h"
#include <iostream>
#include <string>
#include <memory>
#include <mutex>
class FactorySingleton : public AbstractFactory{
private:
    static std::unique_ptr<AbstractFactory> factory;
    static std::mutex mutex;
    FactorySingleton();
    ~FactorySingleton();
public:
    static AbstractFactory& getInstance();
};