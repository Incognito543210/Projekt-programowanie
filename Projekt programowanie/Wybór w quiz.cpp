#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include "Naglowek.h"
using namespace std;

void wybor_w_quiz()
{
	
		char czy_chcesz_dalej;
		do {
			system("cls");
			char wybor_kategoria{};
			string linia;
			cout << "SPRAWD SWOJ¤ WIEDZE!!!!" << endl;
			cout << "MENU: " << endl;
			cout << "1. Stw¢rz pytania" << endl;
			cout << "2. Zagraj w quiz" << endl;
			cout << "3. Menu gˆowne" << endl;
			cout << "4. Zakoäcz program" << endl;
			cout << "Wybierz opcje: ";
			cin >> wybor_kategoria;

			if (wybor_kategoria == '1' || wybor_kategoria == '2' || wybor_kategoria == '3' || wybor_kategoria == '4')
			{
				switch (wybor_kategoria)
				{
				case '1':
					system("cls");
					stworz_pytania();
					break;
				case '2':
					zagraj();
					system("cls");

					break;

				case '3':
					system("cls");
					menu_glowne();

					break;

				case '4':
					exit(0);
					break;
				}
			}
			else
				{
				cout << "Nie ma takiej opcji, spr¢buj ponownie" << endl;
				system("pause");
				system("cls");
				wybor_w_quiz();
				}
		system("cls");
		cout << "Czy chces zrobi† co˜ innego?[y/n]: ";
		cin >> czy_chcesz_dalej;
		} while (czy_chcesz_dalej != 'n');


}