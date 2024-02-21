#include "Utilitar.h"
#include <iostream>
#include <vector>
#include <string>

Utilitar::Utilitar(){}
//Functie de printare custom
void Utilitar::printCustom(const std::string& message){
	std::cout << "Mesaj custom: " << message << std::endl;
}
//Functie de calcul al mediei
double Utilitar::calculMedieUtilitar(const std::vector<int>& values) {
	if (values.empty()){
		std::cout << "Vectorul este gol " << std::endl;
		return 0.0;
	}
	int sum = 0;
	for(int value : values){
		sum +=value;
	}
	return static_cast<double>(sum) / values.size();
}
Utilitar::~Utilitar(){}