#ifndef XML_SERVICE_H
#define XML_SERVICE_H

#include "weather_model.cpp"
#include "service.cpp"

class XmlService: public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};
#endif