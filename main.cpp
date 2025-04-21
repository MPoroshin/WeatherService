#include "json_service.h"
#include "weather_model.cpp"

int main() {
    JsonService js;
    Weather w = js.getWeather("weather.json");
    return 0;
}