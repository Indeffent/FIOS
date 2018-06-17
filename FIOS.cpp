#include <iostream>
#include <fstream>
#include <cstdlib>
#include <windows.h>
#include <string>
using namespace std;

int main() {
    int c = 1, s = 1;
    string cnsl, cn;
    char fs[100000], cr[255];
    string a, p;
    p = '.';
    int i;
    a = "|/-\\";
    //Sleep(5000);
    /*cout << "Loading";
    for (i = 0; i < 20; i++) {
    cout << '.'; p += '.'; Sleep(100); } system("cls");
    for (i = 0; i < 40; i++) {
    cout << "Loading" << p;
    cout << "  " << a[i % 4] << endl;
    Sleep(50); system("cls"); } */
    cout << "F.I.O.S. v0.1 Successfully Loaded" << endl << "> ";
    cin >> cnsl;
    p = '.';
    while (cnsl != "FIOS, let's talk") {
        if ((cnsl == "F.I.O.S.")||(cnsl == "FIOS")||(cnsl == "fios")||(cnsl == "f.i.o.s.")) {
            s = 1;
            cout << "Fantastically Intellegent Operating System" << endl << "Фантастическая Интелектуальная Операционная Система(Ф.И.О.С.)" << endl << "Созданная компанией Region[0] в 2017 году" << endl << "Разработчики: EVENT & Cookie(Основатели Region[0])" << endl << "> "; cin >> cnsl; }
        else if ((cnsl == "clear")||(cnsl == "Clear")) {
            system("cls"); cout << "> "; cin >> cnsl; s = 1;
        } else if ((cnsl == "info")||(cnsl == "Info")) {
            cout << "Информация недоступна, соединение отсутствует..." << endl << "> "; cin >> cnsl; s = 1;
        }  else if ((cnsl == "settings")||(cnsl == "Settings")) {
            cout << "Настройки недоступны" << endl << "> "; cin >> cnsl; s = 1;
        } else if ((cnsl == "SetPosition{clsd}")||(cnsl == "setposition{clsd}")) {
            cout << "Дверь закрыта" << endl << "> "; cin >> cnsl; s = 1;
        }  else if ((cnsl == "SetPosition{opnd}")||(cnsl == "setposition{opnd}")) {
            cout << "Дверь открыта" << endl << "> "; cin >> cnsl; s = 1;
        } else if ((cnsl == "reload")||(cnsl == "Reload")) {
            system("cls"); s = 1;
            cout << "Reloading";
    for (i = 0; i < 20; i++) {
    cout << '.'; p += '.'; Sleep(100); } system("cls");
    for (i = 0; i < 40; i++) {
    cout << "Reloading" << p;
    cout << "  " << a[i % 4] << endl;
    Sleep(50); system("cls"); }
    cout << "F.I.O.S. v0.1 Successfully Reloaded" << endl << "> ";
    cin >> cnsl;
    p = '.';
        } else if ((cnsl == "Setname")||(cnsl == "setname")) { s = 1;
            cout << "Введите имя" << endl << "> "; cin >> cnsl; cout << "Имя '" << cnsl << "' сохранено" << endl << "> "; cin >> cnsl;
             } else if ((cnsl == "Create")||(cnsl == "create")) {
                 s = 1;
                 cout << "Введите имя файла" << endl << "> "; cin >> cr;
                 ofstream file(cr); file.close();
                 cout << "Файл '" << cr << "' успешно создан" << endl << "> "; cin >> cnsl;
             } else if ((cnsl == "Delete")||(cnsl == "delete")) {
                 cout << "Введите имя файла" << endl << "> "; cin >> cr; remove(cr);
                 cout << "Файл '" << cr << "' успешно удален" << endl << "> "; cin >> cnsl;
             } else if ((cnsl == "Open")||(cnsl == "open")) {
                 cout << "Введите имя файла" << endl << "> "; cin >> cr; fstream file(cr);
                 i = 0;
                 while (file >> fs[i]) { i++; }
                 cout << "Файл '" << cr << "' успешно открыт. Хотите увидеть содержимое? (Yes/No)" << endl << "> "; cin >> cn;
                 if ((cn == "yes")||(cn == "Yes")) { cout << fs << endl << "> "; cin >> cnsl; } else
                 if ((cn == "no")||(cn == "No")) { cout << "В любое время вы сможете увидеть содержимое при помощи комманды 'Read'" << endl << "> "; cin >> cnsl; } else {
                    cout << "> "; cin >> cnsl;
                 }
             }/* else if ((cnsl == "")||(cnsl == "")) {

             } else if ((cnsl == "")||(cnsl == "")) {

             } else if ((cnsl == "")||(cnsl == "")) {

             } else if ((cnsl == "")||(cnsl == "")) {

             }*/else if (s == 5) { cout << "Да ты заебал, вводи нормально! Даю еще один шанс" << endl << "> "; cin >> cnsl; s++; }
             else if (s == 7) { cout << "Я начинаю беситься! Последний шанс на нормальный ввод!!!" << endl << "> "; cin >> cnsl; s++; }
              else if (s == 9) { cout << "Всё, пошел нахуй!!!" << endl; Sleep(1000); cout << "F.I.O.S. Не отвечает" << endl; Sleep(2000);
              cout << "Error 418"; Sleep(2000); return 0;
             } else{
            cout << "Неизвестная команда" << endl << "> "; cin >> cnsl; s++;
        }
    }


    /*let's talk
    cout << "Loading";
    for (i = 0; i < 20; i++) {
    cout << '.'; p += '.'; Sleep(100); } system("cls");
    for (i = 0; i < 40; i++) {
    cout << "Loading" << p;
    cout << "  " << a[i % 4] << endl;
    Sleep(50); system("cls"); }
    cout << "F.I.O.S. Talk v0.1 Successfully Loaded" << endl << "> ";
    cin >> cnsl;
    p = '.';



        return 0;*/
}
