#ifndef SERVICE_H
#define SERVICE_H

#include <string>

class Weather; // Предполагается, что класс Weather объявлен где-то еще

class Service {
public:
    virtual Weather getWeather(std::string s) = 0;
    virtual ~Service() = default; // Виртуальный деструктор
};

#endif // SERVICE_H
