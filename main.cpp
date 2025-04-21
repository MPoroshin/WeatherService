#include "xml_service.h"
#include "weather_model.h"

int main()
{
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
    return 0;
}