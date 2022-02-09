#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include "Naglowek.h"
using namespace std;

void statystyki()
{
	fstream ilosc_obejrzanych_filmow, ilosc_czasu_filmow, ilosc_obejrzanych_seriali, ilosc_czasu_seriali, ilosc_odcinkow_seriali, ilosc_obejrzanych_anime, ilosc_odcinkow_anime, ilosc_czasu_anime;
	string linia;
	int liczba{}, suma{}, odcinki{};
	double liczba_czasu{};


	char czy_chcesz_dalej;
	do {
		system("cls");
		char wybor_kategoria{};
		string linia;
		cout << "STATYSTYKI WATCHLISTY" << endl;
		cout << "KATEGORIE: " << endl;
		cout << "1. Film" << endl;
		cout << "2. Serial" << endl;
		cout << "3. Anime" << endl;
		cout << "4. caˆ¥ kolekcje" << endl;
		cout << "5. Powr¢t do gˆownego menu" << endl;
		cout << "6. Zakoncz program" << endl;
		cout << "Wybierz opcje: ";
		cin >> wybor_kategoria;
		if (wybor_kategoria == '1' || wybor_kategoria == '2' || wybor_kategoria == '3' || wybor_kategoria == '4' || wybor_kategoria == '5' || wybor_kategoria == '6')
		{

		switch (wybor_kategoria)
		{
		case '1':
			system("cls");
			ilosc_obejrzanych_filmow.open("ilosc-obejrzanych-filmow.txt", ios::in);
			if (ilosc_obejrzanych_filmow.is_open())
			{
				while (!ilosc_obejrzanych_filmow.eof())
				{
					getline(ilosc_obejrzanych_filmow, linia);
					/*cout << linia << endl;*/
					liczba = atoi(linia.c_str());
					suma += liczba;
				}

				cout << "Ilo˜† obejrzanych film¢w: " << suma << endl;
				/*n = suma;*/
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ filmu." << endl;
			}
			ilosc_obejrzanych_filmow.close();

			ilosc_czasu_filmow.open("ilosc-czasu-filmow.txt", ios::in);
			if (ilosc_czasu_filmow.is_open())
			{
				while (!ilosc_czasu_filmow.eof())
				{
					getline(ilosc_czasu_filmow, linia);
					/*cout << linia << endl;*/
					liczba = atof(linia.c_str());
					liczba_czasu += liczba;

				}

				cout << "Ilo˜† czasu zmarnowanego na filmy: " << setprecision(3) << (liczba_czasu) / 60 << " godzin." << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ filmu." << endl;
			}
			ilosc_czasu_filmow.close();
			liczba_czasu = 0;
			suma = 0;
			system("pause");
			break;
		case '2':

			system("cls");
			ilosc_obejrzanych_seriali.open("ilosc-obejrzanych-seriali.txt", ios::in);
			if (ilosc_obejrzanych_seriali.is_open())
			{
				while (!ilosc_obejrzanych_seriali.eof())
				{
					getline(ilosc_obejrzanych_seriali, linia);
					/*cout << linia << endl;*/
					liczba = atoi(linia.c_str());
					suma += liczba;
				}

				cout << "Ilo˜† obejrzanych serial¢w: " << suma << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ seriali." << endl;
			}
			ilosc_obejrzanych_seriali.close();

			ilosc_odcinkow_seriali.open("ilosc-odcinkow-seriali.txt", ios::in);
			if (ilosc_odcinkow_seriali.is_open())
			{
				while (!ilosc_odcinkow_seriali.eof())
				{
					getline(ilosc_odcinkow_seriali, linia);
					/*cout << linia << endl;*/
					liczba = atoi(linia.c_str());
					odcinki += liczba;
				}

				cout << "Ilo˜† obejrzanych odcink¢w serial¢w: " << odcinki << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ seriali." << endl;
			}
			ilosc_obejrzanych_seriali.close();

			ilosc_czasu_seriali.open("ilosc-czasu-seriali.txt", ios::in);
			if (ilosc_czasu_seriali.is_open())
			{
				while (!ilosc_czasu_seriali.eof())
				{
					getline(ilosc_czasu_seriali, linia);
					/*cout << linia << endl;*/
					liczba = atof(linia.c_str());
					liczba_czasu += liczba;

				}

				cout << "Ilo˜† czasu zmarnowanego na seriale: " << setprecision(3) << (liczba_czasu) / 60 << " godzin." << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ filmu." << endl;
			}
			ilosc_czasu_seriali.close();
			liczba_czasu = 0;
			suma = 0;
			odcinki = 0;

			system("pause");
			break;

		case '3':
			system("cls");

			ilosc_obejrzanych_anime.open("ilosc-obejrzanych-anime.txt", ios::in);
			if (ilosc_obejrzanych_anime.is_open())
			{
				while (!ilosc_obejrzanych_anime.eof())
				{
					getline(ilosc_obejrzanych_anime, linia);
					/*cout << linia << endl;*/
					liczba = atoi(linia.c_str());
					suma += liczba;
				}

				cout << "Ilo˜† obejrzanych anime: " << suma << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ anime." << endl;
			}
			ilosc_obejrzanych_anime.close();

			ilosc_odcinkow_anime.open("ilosc-odcinkow-anime.txt", ios::in);
			if (ilosc_odcinkow_anime.is_open())
			{
				while (!ilosc_odcinkow_anime.eof())
				{
					getline(ilosc_odcinkow_anime, linia);
					/*cout << linia << endl;*/
					liczba = atoi(linia.c_str());
					odcinki += liczba;
				}

				cout << "Ilo˜† obejrzanych odcink¢w anime: " << odcinki << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ anime." << endl;
			}
			ilosc_odcinkow_anime.close();

			ilosc_czasu_anime.open("ilosc-czasu-anime.txt", ios::in);
			if (ilosc_czasu_anime.is_open())
			{
				while (!ilosc_czasu_anime.eof())
				{
					getline(ilosc_czasu_anime, linia);
					/*cout << linia << endl;*/
					liczba = atof(linia.c_str());
					liczba_czasu += liczba;

				}

				cout << "Ilo˜† czasu zmarnowanego na anime: " << setprecision(3) << (liczba_czasu) / 60 << " godzin." << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ anime." << endl;
			}
			ilosc_czasu_anime.close();
			liczba_czasu = 0;
			suma = 0;
			odcinki = 0;




			system("pause");
			break;
		case '4':
			system("cls");
			ilosc_obejrzanych_filmow.open("ilosc-obejrzanych-filmow.txt", ios::in);
			if (ilosc_obejrzanych_filmow.is_open())
			{
				while (!ilosc_obejrzanych_filmow.eof())
				{
					getline(ilosc_obejrzanych_filmow, linia);
					/*cout << linia << endl;*/
					liczba = atoi(linia.c_str());
					suma += liczba;
				}

				cout << "Ilo˜† obejrzanych film¢w: " << suma << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ filmu." << endl;
			}
			ilosc_obejrzanych_filmow.close();

			ilosc_czasu_filmow.open("ilosc-czasu-filmow.txt", ios::in);
			if (ilosc_czasu_filmow.is_open())
			{
				while (!ilosc_czasu_filmow.eof())
				{
					getline(ilosc_czasu_filmow, linia);
					/*cout << linia << endl;*/
					liczba = atof(linia.c_str());
					liczba_czasu += liczba;

				}

				cout << "Ilo˜† czasu zmarnowanego na filmy: " << setprecision(3) << (liczba_czasu) / 60 << " godzin." << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ filmu." << endl;
			}
			ilosc_czasu_filmow.close();
			liczba_czasu = 0;
			suma = 0;

			cout << endl;
			cout << "***********************************" << endl;
			cout << endl;


			ilosc_obejrzanych_seriali.open("ilosc-obejrzanych-seriali.txt", ios::in);
			if (ilosc_obejrzanych_seriali.is_open())
			{
				while (!ilosc_obejrzanych_seriali.eof())
				{
					getline(ilosc_obejrzanych_seriali, linia);
					/*cout << linia << endl;*/
					liczba = atoi(linia.c_str());
					suma += liczba;
				}

				cout << "Ilo˜† obejrzanych serial¢w: " << suma << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ seriali." << endl;
			}
			ilosc_obejrzanych_seriali.close();

			ilosc_odcinkow_seriali.open("ilosc-odcinkow-seriali.txt", ios::in);
			if (ilosc_odcinkow_seriali.is_open())
			{
				while (!ilosc_odcinkow_seriali.eof())
				{
					getline(ilosc_odcinkow_seriali, linia);
					/*cout << linia << endl;*/
					liczba = atoi(linia.c_str());
					odcinki += liczba;
				}

				cout << "Ilo˜† obejrzanych odcink¢w serial¢w: " << odcinki << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ seriali." << endl;
			}
			ilosc_obejrzanych_seriali.close();

			ilosc_czasu_seriali.open("ilosc-czasu-seriali.txt", ios::in);
			if (ilosc_czasu_seriali.is_open())
			{
				while (!ilosc_czasu_seriali.eof())
				{
					getline(ilosc_czasu_seriali, linia);
					/*cout << linia << endl;*/
					liczba = atof(linia.c_str());
					liczba_czasu += liczba;

				}

				cout << "Ilo˜† czasu zmarnowanego na seriale: " << setprecision(3) << (liczba_czasu) / 60 << " godzin." << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ filmu." << endl;
			}
			ilosc_czasu_seriali.close();
			liczba_czasu = 0;
			suma = 0;
			odcinki = 0;
			cout << endl;
			cout << "***********************************" << endl;
			cout << endl;
			ilosc_obejrzanych_anime.open("ilosc-obejrzanych-anime.txt", ios::in);
			if (ilosc_obejrzanych_anime.is_open())
			{
				while (!ilosc_obejrzanych_anime.eof())
				{
					getline(ilosc_obejrzanych_anime, linia);
					/*cout << linia << endl;*/
					liczba = atoi(linia.c_str());
					suma += liczba;
				}

				cout << "Ilo˜† obejrzanych anime: " << suma << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ anime." << endl;
			}
			ilosc_obejrzanych_anime.close();

			ilosc_odcinkow_anime.open("ilosc-odcinkow-anime.txt", ios::in);
			if (ilosc_odcinkow_anime.is_open())
			{
				while (!ilosc_odcinkow_anime.eof())
				{
					getline(ilosc_odcinkow_anime, linia);
					/*cout << linia << endl;*/
					liczba = atoi(linia.c_str());
					odcinki += liczba;
				}

				cout << "Ilo˜† obejrzanych odcink¢w anime: " << odcinki << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ anime." << endl;
			}
			ilosc_odcinkow_anime.close();

			ilosc_czasu_anime.open("ilosc-czasu-anime.txt", ios::in);
			if (ilosc_czasu_anime.is_open())
			{
				while (!ilosc_czasu_anime.eof())
				{
					getline(ilosc_czasu_anime, linia);
					/*cout << linia << endl;*/
					liczba = atof(linia.c_str());
					liczba_czasu += liczba;

				}

				cout << "Ilo˜† czasu zmarnowanego na anime: " << setprecision(3) << (liczba_czasu) / 60 << " godzin." << endl;
			}
			else
			{
				cout << "Nie mo¾na otworzy† pliku z statystyk¥ anime." << endl;
			}
			ilosc_czasu_anime.close();
			liczba_czasu = 0;
			suma = 0;
			odcinki = 0;

			system("pause");
			break;

		case '5':
			system("cls");
			menu_glowne();

			break;

		case '6':
			exit(0);
			break;
		}
	}
		else
	{
	cout << "Nie ma takiej opcji, spr¢buj ponownie" << endl;
	system("pause");
	system("cls");
	statystyki();
	}
		system("cls");
		cout << "Czy chces zrobi† co˜ innego? Jeœli nie kliknij n, jeœli tak kliknij inny dowlony klawisz: ";
		cin >> czy_chcesz_dalej;
	} while (czy_chcesz_dalej != 'n');




	
	system("pause");

}

