#include <iostream>
#include <math.h>
#include <Windows.h>
#include "Engine.h"
#include "Configuration.h"

Engine::Engine(Configuration* configuration) {
    this->engineTemperature = configuration->T_environment;
    this->speed = configuration->V;
    this->configuration = configuration;
};

void Engine::start()  {
    while (engineTemperature < configuration->T_overheating) {
        this->secondsBeforeOverheating += 1;
        Sleep(200);
        speed += configuration->a;
        engineTemperature += heatingSpeed() - coolingSpeed();
        std::cout << "Speed (V): " << speed << std::endl;
        std::cout << "Engine temperature: " << engineTemperature << std::endl << std::endl;
    }
    std::cout << "Time elapsed before overheating: " << this->secondsBeforeOverheating << "s" << std::endl;
};

void Engine::setConfiguration(Configuration* configuration) {
    this->configuration = configuration;
}

double Engine::heatingSpeed() {
    return configuration->M * configuration->H_m + pow(speed, 2) * configuration->H_v;
}

double Engine::coolingSpeed() {
    return configuration->C * (configuration->T_environment - engineTemperature);
}