#pragma once
#ifndef CONFIGURATION_H
#define CONFIGURATION_H

class Configuration {
public:
    const double I = 10;
    double M = 20;
    const double a = M / I;
    const double H_m = 0.01;
    const double H_v = 0.0001;
    const double C = 0.1;
    const double T_overheating = 110;
    double T_environment;
    double V = 0;

    Configuration(double M, double V);
    Configuration();
    void getEnvironmentTemperature();
};

#endif