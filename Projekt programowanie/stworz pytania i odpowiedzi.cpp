#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include "Naglowek.h"
using namespace std;



void stworz_pytania()
{
	fstream pytaniaserial, pytaniafilm, pytaniaanime;
	string tytul, pytanie, odpa, odpb, odpc, odpd,nic;
	char odppop;
	char czy_chcesz_dalej;

	do {
		system("cls");
		char wybor_kategoria{};
	cout << "STWàRZ WASNY QUIZ" << endl;
	cout << "KATEGORIE: " << endl;
	cout << "1. Film" << endl;
	cout << "2. Serial" << endl;
	cout << "3. Anime" << endl;
	cout << "4. Powr¢t do g?ˆownego menu" << endl;
	cout << "5. Zakoäcz program" << endl;
	cout << "Wybierz opcje: ";
	cin >> wybor_kategoria;
	int licznik = 1;
	int ilosc_pytan{};

	if (wybor_kategoria == '1' || wybor_kategoria == '2' || wybor_kategoria == '3' || wybor_kategoria == '4' || wybor_kategoria == '5')
	{

		switch (wybor_kategoria)
		{
		case '1':
			system("cls");
			cout << "*****************************" << endl;
			cout << "**Dodajesz pytania i odpowedzi do kategori film**" << endl;
			cout << "*****************************" << endl;
			//film

			cout << "";
			getline(cin, nic);
			cout << endl;

			cout << "Ile pytaä chcesz poda†: ";
			cin >> ilosc_pytan;
			for (int i = 0; i < ilosc_pytan; i++) {

				cout << "Wprowad« " << licznik << " pytanie wraz z odpowiedziami!" << endl;
				getline(cin, nic);
				cout << "Podaj pytanie: ";
				getline(cin, pytanie);
				cout << endl;
				cout << "Podaj odpowied« a: ";
				getline(cin, odpa);
				cout << endl;
				cout << "Podaj odpowied« b: ";
				getline(cin, odpb);
				cout << endl;
				cout << "Podaj odpowied« c: ";
				getline(cin, odpc); cout << endl;
				cout << "Podaj odpowied« d: ";
				getline(cin, odpd); cout << endl;
				cout << "Podaj poprawn¥ odpowied¾: ";
				cin >> odppop; cout << endl;
				cout << "";
				getline(cin, nic);
				cout << endl;
				licznik++;
				system("cls");


				pytaniafilm.open("pytaniafilm.txt", ios::out | ios::app);

				pytaniafilm << pytanie << endl;
				pytaniafilm << odpa << endl;
				pytaniafilm << odpb << endl;
				pytaniafilm << odpc << endl;
				pytaniafilm << odpd << endl;
				pytaniafilm << odppop << endl;
				pytaniafilm.close();
			}

			break;
		case '2':

			system("cls");
			cout << "*****************************" << endl;
			cout << "**Dodajesz pytania i odpowedzi do kategori serial**" << endl;
			cout << "*****************************" << endl;
			//serial

			cout << "";
			getline(cin, nic);
			cout << endl;

			cout << "Ile pytaä chcesz poda†: ";
			cin >> ilosc_pytan;
			for (int i = 0; i < ilosc_pytan; i++) {

				cout << "Wprowad« " << licznik << " pytanie wraz z odpowiedziami!" << endl;
				getline(cin, nic);
				cout << "Podaj pytanie: ";
				getline(cin, pytanie);
				cout << endl;
				cout << "Podaj odpowied« a: ";
				getline(cin, odpa);
				cout << endl;
				cout << "Podaj odpowied« b: ";
				getline(cin, odpb);
				cout << endl;
				cout << "Podaj odpowied« c: ";
				getline(cin, odpc); cout << endl;
				cout << "Podaj odpowied« d: ";
				getline(cin, odpd); cout << endl;
				cout << "Podaj poprawn¥ odpowied¾: ";
				cin >> odppop; cout << endl;
				cout << "";
				getline(cin, nic);
				cout << endl;
				licznik++;
				system("cls");




				pytaniaserial.open("pytaniaserial.txt", ios::out | ios::app);

				pytaniaserial << pytanie << endl;
				pytaniaserial << odpa << endl;
				pytaniaserial << odpb << endl;
				pytaniaserial << odpc << endl;
				pytaniaserial << odpd << endl;
				pytaniaserial << odppop << endl;
				pytaniaserial.close();
			}
			break;

		case '3':
			system("cls");
			cout << "*****************************" << endl;
			cout << "**Dodajesz pytania i odpowedzi do kategori anime**" << endl;
			cout << "*****************************" << endl;
			//anime
			cout << "";
			getline(cin, nic);
			cout << endl;

			cout << "Ile pytaä chcesz poda†: ";
			cin >> ilosc_pytan;
			for (int i = 0; i < ilosc_pytan; i++) {

				cout << "Wprowad« " << licznik << " pytanie wraz z odpowiedziami!" << endl;
				getline(cin, nic);
				cout << "Podaj pytanie: ";
				getline(cin, pytanie);
				cout << endl;
				cout << "Podaj odpowied« a: ";
				getline(cin, odpa);
				cout << endl;
				cout << "Podaj odpowied« b: ";
				getline(cin, odpb);
				cout << endl;
				cout << "Podaj odpowied« c: ";
				getline(cin, odpc); cout << endl;
				cout << "Podaj odpowied« d: ";
				getline(cin, odpd); cout << endl;
				cout << "Podaj poprawn¥ odpowied¾: ";
				cin >> odppop; cout << endl;
				cout << "";
				getline(cin, nic);
				cout << endl;
				licznik++;
				system("cls");




				pytaniaanime.open("pytaniaanime.txt", ios::out | ios::app);

				pytaniaanime << tytul << endl;
				pytaniaanime << odpa << endl;
				pytaniaanime << odpb << endl;
				pytaniaanime << odpc << endl;
				pytaniaanime << odpd << endl;
				pytaniaanime << odppop << endl;
				pytaniaanime.close();
			}
			break;

		case '4':
			system("cls");
			menu_glowne();

			break;

		case '5':
			exit(0);
			break;
		}

	}
	else
	{
	cout << "Nie ma takiej opcji, spr¢buj ponownie" << endl;
	system("pause");
	system("cls");
	stworz_pytania();
	}
	system("cls");
	cout << "Czy chces zrobi? co? innego?[y/n]: ";
	cin >> czy_chcesz_dalej;
}while (czy_chcesz_dalej != 'n');





}