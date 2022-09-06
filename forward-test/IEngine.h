#include "Configuration.h"
#pragma once
#ifndef IENGINE_H
#define IENGINE_H

class IEngine {
public:
    virtual void start() = 0;
    virtual void setConfiguration(Configuration* configuration) = 0;
    virtual double heatingSpeed() = 0;
    virtual double coolingSpeed() = 0;
};

#endif