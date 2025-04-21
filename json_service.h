#ifndef JSON_SERVICE_H
#define JSON_SERVICE_H

#include "service.h"
#include <string>

class JsonService : public Service {
public:
    virtual Weather getWeather(std::string s) override;
    virtual ~JsonService() {};
};

#endif // JSONSERVICE_H