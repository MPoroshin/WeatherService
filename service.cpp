#ifndef SERVICE_H
#define SERVICE_H

#include "weather_model.h"
#include <string>

class Service {
public:
    virtual Weather getWeather(std::string s) = 0;
    virtual ~Service() = default; // Виртуальный деструктор
};

#endif
