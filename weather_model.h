#ifndef WEATHER_H
#define WEATHER_H

#include <string>

class Weather {
public:
    std::string city;      // название населенного пункта, например "Киров"
    double lon;            // долгота, например 49.6601
    double lat;            // широта, например 58.5966
    double temperature;    // температура, например 5.69
    std::string weather;   // описание погоды, например "дождь"
    double windSpeed;      // скорость ветра, например 4.27
    int clouds;            // облачность, например 100

    // Конструктор класса
    Weather(const std::string& city_, double lon_, double lat_, double temperature_,
            const std::string& weather_, double windSpeed_, int clouds_)
        : city(city_), lon(lon_), lat(lat_), temperature(temperature_),
          weather(weather_), windSpeed(windSpeed_), clouds(clouds_) {}
};

#endif
