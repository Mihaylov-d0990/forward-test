#include <iostream>
#include <string>
#include "Configuration.h"

Configuration::Configuration(double M, double V) {
    getEnvironmentTemperature();
    this->V = V;
    this->M = M;
};

Configuration::Configuration() {
    getEnvironmentTemperature();
};

void Configuration::getEnvironmentTemperature() {
    std::string t_environment;
    while (true) {
        std::cout << "Enter environment temperature: ";
        std::cin >> t_environment;
        if (!atof(t_environment.c_str())) {
            std::cout << "Failed to convert to a number. Try again." << std::endl;
        }
        else {
            T_environment = atof(t_environment.c_str());
            break;
        }
    }
    
}