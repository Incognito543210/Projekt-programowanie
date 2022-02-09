#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include "Naglowek.h"
using namespace std;



void wyczysc()
{

	fstream listaanime, listafilm, listaserial;
	fstream pytaniaserial, pytaniafilm, pytaniaanime;

	char czy_chcesz_dalej;
	do {
		system("cls");
		char wybor_kategoria{};
		string linia;
		cout << "Us¢wanie WATCHLISTY oraz QUIZàW" << endl;
		cout << "KATEGORIE: " << endl;
		cout << "1. Film" << endl;
		cout << "2. Serial" << endl;
		cout << "3. Anime" << endl;
		cout << "4. Caˆ¥ kolekcje" << endl;
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
				listafilm.open("listafilm.txt", ios::out | ios::trunc);
				listafilm.close(); cout << "Usuni©to zawarto˜† kolekcji film¢w" << endl;
				pytaniafilm.open("pytaniafilm.txt", ios::out | ios::trunc);
				pytaniafilm << "Pytania film" << endl;
				pytaniafilm << "  " << endl;
				pytaniafilm.close();
				system("pause");
				break;
			case '2':

				system("cls");
				listaserial.open("listaserial.txt", ios::out | ios::trunc);
				listaserial.close(); cout << "Usuni©to zawarto˜† kolekcji seriali" << endl;
				pytaniaserial.open("pytaniaserial.txt", ios::out | ios::trunc);
				pytaniaserial << "Pytania serial" << endl;
				pytaniaserial << "  " << endl;
				pytaniaserial.close();
				system("pause");
				break;

			case '3':
				system("cls");
				listaanime.open("listaanime.txt", ios::out | ios::trunc);
				listaanime.close(); cout << "Usuni©to zawarto˜† kolekcji anime" << endl;
				pytaniaanime.open("pytaniaanime.txt", ios::out | ios::trunc);
				pytaniaanime << "Pytania anime" << endl;
				pytaniaanime << "  " << endl;
				pytaniaanime.close();
				system("pause");
				break;
			case '4':
				system("cls");
				listafilm.open("listafilm.txt", ios::out | ios::trunc);
				listafilm.close(); cout << "Usuni©to zawarto˜† kolekcji film¢w" << endl;
				listaserial.open("listaserial.txt", ios::out | ios::trunc);
				listaserial.close(); cout << "Usuni©to zawarto˜† kolekcji seriali" << endl;
				listaanime.open("listaanime.txt", ios::out | ios::trunc);
				listaanime.close(); cout << "Usuni©to zawarto˜† kolekcji anime" << endl;
				pytaniafilm.open("pytaniafilm.txt", ios::out | ios::trunc);
				pytaniafilm << "Pytania film" << endl;
				pytaniafilm << "  " << endl;
				pytaniafilm.close();
				pytaniaserial.open("pytaniaserial.txt", ios::out | ios::trunc);
				pytaniaserial << "Pytania serial" << endl;
				pytaniaserial << "  " << endl;
				pytaniaserial.close();
				pytaniaanime.open("pytaniaanime.txt", ios::out | ios::trunc);
				pytaniaanime << "Pytania anime" << endl;
				pytaniaanime << "  " << endl;
				pytaniaanime.close();
				cout << "Usuni©to caˆ¥ kolekcje oraz quizy!!!!" << endl;
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
			wyczysc();
		}
		system("cls");
		cout << "Czy chces zrobi† co˜ innego? Jeœli nie kliknij n, jeœli tak kliknij inny dowlony klawisz: : ";
		cin >> czy_chcesz_dalej;
	} while (czy_chcesz_dalej != 'n');


















	
}