#include "xml_service.h"
#include "weather_model.cpp"

int main()
{
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
    return 0;
}