#include "Times.h"
#include <stdexcept>
#include <string>
using namespace std;
#include<cmath>

/// Конструктор
Time::Time() {
    hours = 0;
    minutes = 0;
    seconds = 0;
}

// конструктор с параметрами
Time::Time(int h, int m, int s) {

    set_time(h, m, s);
}

/// Задать всё время в стандартном формате
void Time::set_time(int h, int m, int s) {
    set_seconds(s);
    set_minutes(m);
    set_hours(h);
}

/// Задать всё время в секундах
int Time::convert_to_seconds() {
    return hours * 3600 + minutes * 60 + seconds;
}
int Time::convert_to_minutes() {
    return hours * 60 + minutes + round(seconds/60);
}
int Time::convert_to_hours() {
    return hours + round(minutes / 60) + round(seconds/3600);
}

/// Задать секунды
void Time::set_seconds(int s) {

    if ((s < 0) || (s > 59)) throw
            invalid_argument("error");
    seconds = s; // заполнение поля
}

/// Задать минуты
void Time::set_minutes(int m) {

    if ((m < 0) || (m > 59)) throw
            invalid_argument("error");
    minutes = m; // заполнение поля
}

/// Задать часы
void Time::set_hours(int h) {
    if ((h < 0) || (h > 23)) throw
            invalid_argument("error");
    hours = h; // заполнение поля
}

/// Получить секунды
int Time::get_seconds() const {
    return seconds;
}

/// Получить минуты
int Time::get_minutes() const {
    return minutes;
}

/// Получить часы
int Time::get_hours() const {
    return hours;
}

/// Получить секунды
std::string Time::get_time() {
    return std::to_string(hours) + ":" + std::to_string(minutes) + ":" + std::to_string(seconds);
}
