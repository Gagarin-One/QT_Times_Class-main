#ifndef CALC_H
#define CALC_H


#include <string>

/// Класс "Время"
class Time {
private:
    int hours;	// часы
    int minutes; // минуты
    int seconds; // секунды
    int all_time_in_seconds; //всё время в секундах
public:
    // конструктор (инициализирует поля)
    Time();

    // конструктор с параметрами
    /// h - часы, m - минуты, s - секунды
    Time(int h, int m, int s);

    //перевод вего времени в секунды
    int convert_to_seconds();

    //перевод вего времени в минуты
    int convert_to_minutes();

    //перевод вего времени в часы
    int convert_to_hours();


    // Задать время в стандартном формате
    ///h - часы, m - минуты, s - секунды
    void set_time(int h, int m, int s);

    /// Задать секунды s
    void set_seconds(int s);

    // Задать минуты m
    void set_minutes(int m);

    // Задать часы h
    void set_hours(int h);

    // Получить секунды
    int get_seconds() const;

    // Получить минуты
    int get_minutes() const;

    // Получить часы
    int get_hours() const;


    // Добавить время
    // h - часы, m - минуты, s - секунды
    void add_time(int h, int m, int s);


    std::string get_time();

    // Преобразовать время в строку
    std::string to_string();

};
#endif
