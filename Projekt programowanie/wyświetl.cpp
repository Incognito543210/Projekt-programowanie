#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include "Naglowek.h"
using namespace std;



void wyswietl_liste()
{
	fstream listaanime, listafilm, listaserial;

	char czy_chcesz_dalej{};
	do {
		system("cls");
		char wybor_kategoria{};
		string linia;
		cout << "WY—WIETLANIE WATCHLISTY" << endl;
		cout << "KATEGORIE: " << endl;
		cout << "1. Film" << endl;
		cout << "2. Serial" << endl;
		cout << "3. Anime" << endl;
		cout << "4. Wy˜wietl caˆ¥ kolekcje" << endl;
		cout << "5. Powr¢t do menu gˆ¢wnwgo" << endl;
		cout << "6. Zakoäcz program" << endl;
		cout << "Wybierz opcje: ";
		cin >> wybor_kategoria;

		if (wybor_kategoria == '1' || wybor_kategoria == '2' || wybor_kategoria == '3' || wybor_kategoria == '4' || wybor_kategoria == '5' || wybor_kategoria == '6')
		{
			switch (wybor_kategoria)
			{
			case '1':
				system("cls");
				cout << "**************************" << endl;
				cout << "*******LISTA FILMàW*******" << endl;
				cout << "**************************" << endl;
				listafilm.open("listafilm.txt", ios::in);
				if (listafilm.is_open())
				{
					while (!listafilm.eof())
					{
						getline(listafilm, linia);
						cout << linia << endl;
					}
				}
				else
					cout << "Nie mo¾na otworzy† pliku." << endl;
				system("pause");
				listafilm.close();
				break;
			case '2':

				system("cls");
				cout << "***************************" << endl;
				cout << "*******LISTA SERIALI*******" << endl;
				cout << "***************************" << endl;
				listaserial.open("listaserial.txt", ios::in);
				if (listaserial.is_open())
				{
					while (!listaserial.eof())
					{
						getline(listaserial, linia);
						cout << linia << endl;
					}
				}
				else
					cout << "Nie mo¾na otworzy† pliku." << endl;
				system("pause");
				listaserial.close();
				break;

			case '3':
				system("cls");
				cout << endl;
				cout << "***************************" << endl;
				cout << "********LISTA ANIME********" << endl;
				cout << "***************************" << endl;
				listaanime.open("listaanime.txt", ios::in);
				if (listaanime.is_open())
				{
					while (!listaanime.eof())
					{
						getline(listaanime, linia);
						cout << linia << endl;
					}
				}
				else
					cout << "Nie mo¾na otworzy† pliku." << endl;
				system("pause");
				listaanime.close();
				break;
			case '4':
				system("cls");
				cout << "*******************" << endl;
				cout << "**Kolekcja film¢w**" << endl;
				cout << "*******************" << endl;
				cout << endl;
				listafilm.open("listafilm.txt", ios::in);
				if (listafilm.is_open())
				{
					while (!listafilm.eof())
					{
						getline(listafilm, linia);
						cout << linia << endl;
					}
				}
				else
				{
					cout << "Nie mo¾na otworzy† pliku." << endl;
				}
				cout << endl;
				cout << "********************" << endl;
				cout << "**Kolekcja seriali**" << endl;
				cout << "********************" << endl;
				cout << endl;
				listaserial.open("listaserial.txt", ios::in);
				if (listaserial.is_open())
				{
					while (!listaserial.eof())
					{
						getline(listaserial, linia);
						cout << linia << endl;
					}
				}
				else
				{
					cout << "Nie mo¾na otworzy† pliku." << endl;
				}
				cout << endl;
				cout << "******************" << endl;
				cout << "**Kolekcja anime**" << endl;
				cout << "******************" << endl;
				cout << endl;
				listaanime.open("listaanime.txt", ios::in);
				if (listaanime.is_open())
				{
					while (!listaanime.eof())
					{
						getline(listaanime, linia);
						cout << linia << endl;
					}
				}
				else
				{
					cout << "Nie mo¾na otworzy† pliku." << endl;
				}
				system("pause");

				listafilm.close();
				listaserial.close();
				listaanime.close();
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
	wyswietl_liste();
	}
		
	system("cls");
	cout << "Czy chces zrobi† co˜ innego? Jeœli nie kliknij n, jeœli tak kliknij inny dowlony klawisz: ";
	cin >> czy_chcesz_dalej;
		
	} while (czy_chcesz_dalej != 'n');
	

}
