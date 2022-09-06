#include "Configuration.h"
#include "IEngine.h"
#pragma once
#ifndef ENGINE_H
#define ENGINE_H

class Engine : public IEngine {
public:
    Engine(Configuration* configuration);
    virtual void start() override;
    virtual void setConfiguration(Configuration* configuration) override;
    virtual double heatingSpeed() override;
    virtual double coolingSpeed() override;

private:
    double engineTemperature;
    double speed;
    int secondsBeforeOverheating = 0;
    Configuration* configuration;
};

#endif