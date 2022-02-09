#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<cstdlib>
#include<algorithm>
#include "Naglowek.h"
using namespace std;

 void zagraj()
{
	fstream pytaniaserial, pytaniafilm, pytaniaanime;


	int n{};
	string temat, cisza;

	int punkty = 0;
	string linia;
	string odpowiedz;
	int nr_linii = 1;
	int nr_pytania = 0;


	string* tresc = new string[200];
	string* odpA = new string[200];
	string* odpB = new string[200];
	string* odpC = new string[200];
	string* odpD = new string[200];
	string* poprawna = new string[200];
	


	char czy_chcesz_dalej;

	do {
		system("cls");
		char wybor_kategoria{};
		cout << "ZAGRAJ W QUIZ" << endl;
		cout << "KATEGORIE: " << endl;
		cout << "1. Film" << endl;
		cout << "2. Serial" << endl;
		cout << "3. Anime" << endl;
		cout << "4. Powr¢t do g?ownego menu" << endl;
		cout << "5. Zakoncz program" << endl;
		cout << "Wybierz opcje: ";
		cin >> wybor_kategoria;
		if (wybor_kategoria == '1' || wybor_kategoria == '2' || wybor_kategoria == '3' || wybor_kategoria == '4' || wybor_kategoria == '5')
		{
			switch (wybor_kategoria)
			{
			case '1':
				system("cls");
				cout << "*****************************" << endl;
				cout << "**GRASZ W KATEGORI FILM**" << endl;
				cout << "*****************************" << endl;
				//film
				pytaniafilm.open("pytaniafilm.txt", ios::in);
				if (pytaniafilm.is_open())
				{
				}
				else cout << "Nie mo¾na otworzy† pliku";

				while (getline(pytaniafilm, linia))
				{
					switch (nr_linii)
					{
					case 1: temat = linia; break;
					case 2: cisza = linia; break;
					case 3: *(tresc + nr_pytania) = linia; break;
					case 4: *(odpA + nr_pytania) = linia; break;
					case 5: *(odpB + nr_pytania) = linia; break;
					case 6: *(odpC + nr_pytania) = linia; break;
					case 7: *(odpD + nr_pytania) = linia; break;
					case 8: *(poprawna + nr_pytania) = linia; break;

					}
					if (nr_linii == 8) { nr_linii = 2; nr_pytania++; }
					nr_linii++;
				}

				pytaniafilm.close();

				cout << "Na ile pytaä chcesz odpowowiedzie†: ";
				cin >> n;
				for (int i = 0; i < n; i++)
				{
					cout << endl << *(tresc + i) << endl;
					cout << "A. " << *(odpA + i) << endl;
					cout << "B. " << *(odpB + i) << endl;
					cout << "C. " << *(odpC + i) << endl;
					cout << "D. " << *(odpD + i) << endl;

					cout << "Twoja odpowiedz: ";
					cin >> odpowiedz;

					transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);

					if (odpowiedz == poprawna[i])
					{
						cout << "Poprawna odpowiedz, zdobywasz punkt!!" << endl;
						punkty++;

					}
					else { cout << "«le, poprawna: " << poprawna[i] << endl; }
				}
				cout << endl << "Koniec quizu. Zdobyte punkty: " << punkty << endl;
				system("pause");

				delete[]tresc;
				delete[] odpA;
				delete[] odpB;
				delete[] odpC;
				delete[] odpD;
				delete[]poprawna;

				break;
			case '2':

				system("cls");
				cout << "*****************************" << endl;
				cout << "**GRASZ W KATEGORI SERIAL**" << endl;
				cout << "*****************************" << endl;
				//serial
				pytaniaserial.open("pytaniaserial.txt", ios::in);
				if (pytaniaserial.is_open())
				{
				}
				else cout << "Nie mo¾na otworzy† pliku";

				while (getline(pytaniaserial, linia))
				{
					switch (nr_linii)
					{
					case 1: temat = linia; break;
					case 2: cisza = linia; break;
					case 3: *(tresc + nr_pytania) = linia; break;
					case 4: *(odpA + nr_pytania) = linia; break;
					case 5: *(odpB + nr_pytania) = linia; break;
					case 6: *(odpC + nr_pytania) = linia; break;
					case 7: *(odpD + nr_pytania) = linia; break;
					case 8: *(poprawna + nr_pytania) = linia; break;

					}
					if (nr_linii == 8) { nr_linii = 2; nr_pytania++; }
					nr_linii++;
				}

				pytaniaserial.close();

				cout << "Na ile pytaä chcesz odpowowiedzie†: ";
				cin >> n;
				for (int i = 0; i < n; i++)
				{
					cout << endl << *(tresc + i) << endl;
					cout << "A. " << *(odpA + i) << endl;
					cout << "B. " << *(odpB + i) << endl;
					cout << "C. " << *(odpC + i) << endl;
					cout << "D. " << *(odpD + i) << endl;

					cout << "Twoja odpowiedz: ";
					cin >> odpowiedz;

					transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);

					if (odpowiedz == poprawna[i])
					{
						cout << "Poprawna odpowiedz, zdobywasz punkt!!" << endl;
						punkty++;

					}
					else { cout << "«le, poprawna: " << poprawna[i] << endl; }
				}
				cout << endl << "Koniec quizu. Zdobyte punkty: " << punkty << endl;
				system("pause");

				delete[]tresc;
				delete[] odpA;
				delete[] odpB;
				delete[] odpC;
				delete[] odpD;
				delete[]poprawna;
				break;

			case '3':
				system("cls");
				cout << "*****************************" << endl;
				cout << "**GRASZ W KATEGORI ANIME**" << endl;
				cout << "*****************************" << endl;
				pytaniaanime.open("pytaniaanime.txt", ios::in);
				if (pytaniaanime.is_open())
				{
				}
				else cout << "Nie mo¾na otworzy† pliku";

				while (getline(pytaniaanime, linia))
				{
					switch (nr_linii)
					{
					case 1: temat = linia; break;
					case 2: cisza = linia; break;
					case 3: *(tresc + nr_pytania) = linia; break;
					case 4: *(odpA + nr_pytania) = linia; break;
					case 5: *(odpB + nr_pytania) = linia; break;
					case 6: *(odpC + nr_pytania) = linia; break;
					case 7: *(odpD + nr_pytania) = linia; break;
					case 8: *(poprawna + nr_pytania) = linia; break;

					}
					if (nr_linii == 8) { nr_linii = 2; nr_pytania++; }
					nr_linii++;
				}

				pytaniaanime.close();

				cout << "Na ile pytaä chcesz odpowowiedzie†: ";
				cin >> n;
				for (int i = 0; i < n; i++)
				{
					cout << endl << *(tresc + i) << endl;
					cout << "A. " << *(odpA + i) << endl;
					cout << "B. " << *(odpB + i) << endl;
					cout << "C. " << *(odpC + i) << endl;
					cout << "D. " << *(odpD + i) << endl;

					cout << "Twoja odpowiedz: ";
					cin >> odpowiedz;

					transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);

					if (odpowiedz == poprawna[i])
					{
						cout << "Poprawna odpowiedz, zdobywasz punkt!!" << endl;
						punkty++;

					}
					else { cout << "«le, poprawna: " << poprawna[i] << endl; }
				}
				cout << endl << "Koniec quizu. Zdobyte punkty: " << punkty << endl;
				system("pause");

				delete[]tresc;
				delete[] odpA;
				delete[] odpB;
				delete[] odpC;
				delete[] odpD;
				delete[]poprawna;
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
	zagraj();
	}
		system("cls");
		cout << "Czy chces zrobi? co? innego?[y/n]: ";
		cin >> czy_chcesz_dalej;
	} while (czy_chcesz_dalej != 'n');







}