#pragma once
#include <vector>
#include <string>
#include <iostream>

class Utilitar {
private:
Utilitar();
~Utilitar();
public:
static void printCustom(const std::string& message);
static double calculMedieUtilitar(const std::vector<int>& valori);
};