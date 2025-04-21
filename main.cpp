#include "xml_service.h"
#include "weather_model.h"
#include "json_service.h"
#include "weather_model.h"

int main()
{
    JsonService js;
    Weather w = js.getWeather("weather.json");
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
    return 0;
}