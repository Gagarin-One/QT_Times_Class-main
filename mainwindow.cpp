#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


// конструктор главного окна
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)  // явный вызов конструктора базового класса
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Объект ui содержит все классы-элементы интерфейса,
    // расположенные на главном окне.
    // класс для ui генерируется автоматически из дизайна окна
    ui->plainTextEdit->setReadOnly( !ui->plainTextEdit->isReadOnly() ); //запрет редактирования в PlainText
}

// Деструктор удаления объекта окна
MainWindow::~MainWindow()
{
    delete ui;
}

// кнопка при нажатии которой отображается время
void MainWindow::on_Button_calc_clicked()
{
    try {
        ui->lineEdit_hours->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        ui->lineEdit_minutes->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        ui->lineEdit_seconds->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        t.set_hours( ui->lineEdit_hours->text().toInt()); // Обращение к содержимому поля ввода часов
        t.set_minutes( ui->lineEdit_minutes->text().toInt()); // Обращение к содержимому поля ввода минут
        t.set_seconds( ui->lineEdit_seconds->text().toInt()); // Обращение к содержимому поля ввода секунд

        ui->plainTextEdit->appendPlainText( "Время:  " +QString::number(t.get_hours(),'f', 0 ) + ":" + QString::number(t.get_minutes(),'f', 0 )+":" + QString::number(t.get_seconds(),'f', 0 ));
    }    catch (const std::invalid_argument &e) { // при неверно введеных данных появляется error
        ui->lineEdit_hours->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное
        ui->lineEdit_minutes->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное
        ui->lineEdit_seconds->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное


         ui->plainTextEdit->appendPlainText( "Неверно введенные данные"); // вывод в PlainText ошибки

    }

}


void MainWindow::on_about_author_triggered() // обработчки меню( о авторе)
{
    QMessageBox::about(this, "Об авторе", "Автор: Тронин Михаил");
}


void MainWindow::on_pushButton_clear_clicked() // очистить текст в таблице и лейблах
{
  ui->plainTextEdit->clear();


}

// кнопка при нажатии которой отображается время в секундах
void MainWindow::on_Button_to_sec_clicked()
{
    try {
        ui->lineEdit_hours->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        ui->lineEdit_minutes->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        ui->lineEdit_seconds->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        t.set_hours( ui->lineEdit_hours->text().toInt()); // Обращение к содержимому поля ввода часов
        t.set_minutes( ui->lineEdit_minutes->text().toInt()); // Обращение к содержимому поля ввода минут
        t.set_seconds( ui->lineEdit_seconds->text().toInt()); // Обращение к содержимому поля ввода секунд

        ui->plainTextEdit->appendPlainText( "Всё время в минутах:" + QString::number(t.convert_to_seconds(),'f', 0 ));
    }    catch (const std::invalid_argument &e) { // при неверно введеных данных появляется error
        ui->lineEdit_hours->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное
        ui->lineEdit_minutes->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное
        ui->lineEdit_seconds->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное


        ui->plainTextEdit->appendPlainText( "Неверно введенные данные"); // вывод в PlainText ошибки
    }

}

// кнопка при нажатии которой отображается время в минутах
void MainWindow::on_Button_to_min_clicked()
{
    try {
        ui->lineEdit_hours->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        ui->lineEdit_minutes->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        ui->lineEdit_seconds->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        t.set_hours( ui->lineEdit_hours->text().toInt()); // Обращение к содержимому поля ввода часов
        t.set_minutes( ui->lineEdit_minutes->text().toInt()); // Обращение к содержимому поля ввода минут
        t.set_seconds( ui->lineEdit_seconds->text().toInt()); // Обращение к содержимому поля ввода секунд

      ui->plainTextEdit->appendPlainText( "Всё время в минутах:" + QString::number(t.convert_to_minutes(),'f', 0 ));
    }    catch (const std::invalid_argument &e) { // при неверно введеных данных появляется error
        ui->lineEdit_hours->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное
        ui->lineEdit_minutes->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное
        ui->lineEdit_seconds->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное


        ui->plainTextEdit->appendPlainText( "Неверно введенные данные"); // вывод в PlainText ошибки

    }
}

// кнопка при нажатии которой отображается время в часах
void MainWindow::on_Button_to_hour_clicked()
{

    try {
        ui->lineEdit_hours->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        ui->lineEdit_minutes->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        ui->lineEdit_seconds->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        t.set_hours( ui->lineEdit_hours->text().toInt()); // Обращение к содержимому поля ввода часов
        t.set_minutes( ui->lineEdit_minutes->text().toInt()); // Обращение к содержимому поля ввода минут
        t.set_seconds( ui->lineEdit_seconds->text().toInt()); // Обращение к содержимому поля ввода секунд

        ui->plainTextEdit->appendPlainText( "Всё время в часах:" + QString::number(t.convert_to_hours(),'f', 0 ));
    }    catch (const std::invalid_argument &e) { // при неверно введеных данных появляется error
        ui->lineEdit_hours->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное
        ui->lineEdit_minutes->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное
        ui->lineEdit_seconds->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное


        ui->plainTextEdit->appendPlainText( "Неверно введенные данные"); // вывод в PlainText ошибки

    }
}
