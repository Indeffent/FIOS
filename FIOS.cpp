#include <iostream>
#include <fstream>
#include <cstdlib>
#include <windows.h>
#include <string>
//#pragma comment(lib, "libwinmm.a")
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
    cout << "Loading";
    for (i = 0; i < 20; i++) {
    cout << '.'; p += '.'; Sleep(100); } system("cls");
    for (i = 0; i < 40; i++) {
    cout << "Loading" << p;
    cout << "  " << a[i % 4] << endl;
    Sleep(50); system("cls"); }
    cout << "NeOS v0.1 was successfully loaded";
    p = '.';
    while (cnsl != "FIOS, let's talk") {
            cout << endl << "> "; cin >> cnsl;
        if ((cnsl == "clear")||(cnsl == "Clear")) {
            system("cls"); s = 1;
            cout << "Console was cleared";
        } else if ((cnsl == "about")||(cnsl == "About")) {
            cout << ""; s = 1;
        }  else if ((cnsl == "settings")||(cnsl == "Settings")) {
            cout << "����ன�� ������㯭�"; s = 1;
        } else if ((cnsl == "reload")||(cnsl == "Reload")) {
            system("cls"); s = 1;
            cout << "Reloading";
    for (i = 0; i < 20; i++) {
    cout << '.'; p += '.'; Sleep(100); } system("cls");
    for (i = 0; i < 40; i++) {
    cout << "Reloading" << p;
    cout << "  " << a[i % 4] << endl;
    Sleep(50); system("cls"); }
    cout << "NeOS v0.1 was successfully reloaded";
    p = '.';
        } else if ((cnsl == "Create")||(cnsl == "create")) {
                 s = 1;
                 cout << "������ ��� 䠩��" << endl << "> "; cin >> cr;
                 ofstream file(cr); file.close();
                 cout << "���� '" << cr << "' �ᯥ譮 ᮧ���";
             } else if ((cnsl == "Delete")||(cnsl == "delete")) {
                 cout << "������ ��� 䠩��" << endl << "> "; cin >> cr; remove(cr);
                 cout << "���� '" << cr << "' �ᯥ譮 㤠���";
             } else if ((cnsl == "Open")||(cnsl == "open")) {
                 cout << "������ ��� 䠩��" << endl << "> "; cin >> cr; ifstream file(cr);
                 i = 0;
                 fs[0] = ' ';
                 file >> fs;
                 if (fs[0] == ' ') cout << "�ந��諠 �訡��! ���� ���� ��� �� �������! �஢���� �ࠢ��쭮��� ����ᠭ�� ����� 䠩��."; else {
                 cout << "���� '" << cr << "' �ᯥ譮 �����. ���� 㢨���� ᮤ�ন���? (Yes/No)" << endl << "> "; cin >> cn;
                 if ((cn == "yes")||(cn == "Yes")) { cout << fs << " "; while (file >> fs) { cout << fs << " "; } cout << endl << "> "; cin >> cnsl; }
                 }
             } /*else if ((cnsl == "play")||(cnsl == "Play")) {
                 PlaySound( "REPORT_RESPONSE_COPY_01.wav", NULL, SND_ASYNC | SND_FILENAME );
             } else if ((cnsl == "")||(cnsl == "")) {

             } else if ((cnsl == "")||(cnsl == "")) {

             } else if ((cnsl == "")||(cnsl == "")) {

             }*/else if (s == 5) { cout << "�� �� ������, ����� ��ଠ�쭮! ��� �� ���� 蠭�"; s++; }
             else if (s == 7) { cout << "� ��稭�� �������! ��᫥���� 蠭� �� ��ଠ��� ����!!!"; s++; }
              else if (s == 9) { cout << "���, ��襫 ����!!!" << endl; Sleep(1000); cout << "NeOS �� �⢥砥�" << endl; Sleep(2000);
              cout << "Error 418"; Sleep(2000); return 0;
             } else{
            cout << "�������⭠� �������"; s++;
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
