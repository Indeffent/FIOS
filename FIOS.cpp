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
            cout << "Fantastically Intellegent Operating System" << endl << "�������᪠� ��⥫���㠫쭠� ����樮���� ���⥬�(�.�.�.�.)" << endl << "��������� ��������� Region[0] � 2017 ����" << endl << "���ࠡ��稪�: EVENT & Cookie(�᭮��⥫� Region[0])" << endl << "> "; cin >> cnsl; }
        else if ((cnsl == "clear")||(cnsl == "Clear")) {
            system("cls"); cout << "> "; cin >> cnsl; s = 1;
        } else if ((cnsl == "info")||(cnsl == "Info")) {
            cout << "���ଠ�� ������㯭�, ᮥ������� ���������..." << endl << "> "; cin >> cnsl; s = 1;
        }  else if ((cnsl == "settings")||(cnsl == "Settings")) {
            cout << "����ன�� ������㯭�" << endl << "> "; cin >> cnsl; s = 1;
        } else if ((cnsl == "SetPosition{clsd}")||(cnsl == "setposition{clsd}")) {
            cout << "����� ������" << endl << "> "; cin >> cnsl; s = 1;
        }  else if ((cnsl == "SetPosition{opnd}")||(cnsl == "setposition{opnd}")) {
            cout << "����� �����" << endl << "> "; cin >> cnsl; s = 1;
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
            cout << "������ ���" << endl << "> "; cin >> cnsl; cout << "��� '" << cnsl << "' ��࠭���" << endl << "> "; cin >> cnsl;
             } else if ((cnsl == "Create")||(cnsl == "create")) {
                 s = 1;
                 cout << "������ ��� 䠩��" << endl << "> "; cin >> cr;
                 ofstream file(cr); file.close();
                 cout << "���� '" << cr << "' �ᯥ譮 ᮧ���" << endl << "> "; cin >> cnsl;
             } else if ((cnsl == "Delete")||(cnsl == "delete")) {
                 cout << "������ ��� 䠩��" << endl << "> "; cin >> cr; remove(cr);
                 cout << "���� '" << cr << "' �ᯥ譮 㤠���" << endl << "> "; cin >> cnsl;
             } else if ((cnsl == "Open")||(cnsl == "open")) {
                 cout << "������ ��� 䠩��" << endl << "> "; cin >> cr; fstream file(cr);
                 i = 0;
                 while (file >> fs[i]) { i++; }
                 cout << "���� '" << cr << "' �ᯥ譮 �����. ���� 㢨���� ᮤ�ন���? (Yes/No)" << endl << "> "; cin >> cn;
                 if ((cn == "yes")||(cn == "Yes")) { cout << fs << endl << "> "; cin >> cnsl; } else
                 if ((cn == "no")||(cn == "No")) { cout << "� �� �६� �� ᬮ��� 㢨���� ᮤ�ন��� �� ����� �������� 'Read'" << endl << "> "; cin >> cnsl; } else {
                    cout << "> "; cin >> cnsl;
                 }
             }/* else if ((cnsl == "")||(cnsl == "")) {

             } else if ((cnsl == "")||(cnsl == "")) {

             } else if ((cnsl == "")||(cnsl == "")) {

             } else if ((cnsl == "")||(cnsl == "")) {

             }*/else if (s == 5) { cout << "�� �� ������, ����� ��ଠ�쭮! ��� �� ���� 蠭�" << endl << "> "; cin >> cnsl; s++; }
             else if (s == 7) { cout << "� ��稭�� �������! ��᫥���� 蠭� �� ��ଠ��� ����!!!" << endl << "> "; cin >> cnsl; s++; }
              else if (s == 9) { cout << "���, ��襫 ����!!!" << endl; Sleep(1000); cout << "F.I.O.S. �� �⢥砥�" << endl; Sleep(2000);
              cout << "Error 418"; Sleep(2000); return 0;
             } else{
            cout << "�������⭠� �������" << endl << "> "; cin >> cnsl; s++;
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
