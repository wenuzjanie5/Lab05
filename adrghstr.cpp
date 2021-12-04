#include <iostream>
using namespace std;

int main()
{
	//zadanie 1
	cout << "Zadanie 1\n\nPierwsza jest inicjalizowana przez literal lancuchowy, druga zbiorczo\n\n""";

	//zadanie 2
	cout << "Zadanie 2\n\nTakie wczytywanie danych jest mo¿liwa tylko dla tablic znakowych.\n\n";

	//zadanie 3
	cout << "Zadanie 3\n\n";

	char tab[] = "wiosna";

	cout << size(tab) << "\n";

	//zadanie 4
	cout << "Zadanie 4\n\nPodaj imiê, nazwisko i PESEL oddzielone spacjami\n";

	char imie[100], nazwisko[100], pesel[12], imie_i_nazwisko[200];
	cin >> imie >> nazwisko >> pesel;

	strcpy_s(imie_i_nazwisko, imie);
	strcat_s(imie_i_nazwisko, nazwisko);
	//cout << size(pesel);
	if (size(pesel) > 11) cout << "\nnumer PESEL za dlugi";
	else if (size(pesel) < 11) cout << "\nnumer PESEL za krotki";
	else cout << "\nz Pana PESELem jest wszystko w porzadku";

	//Zadanie 5
	cout << "\n\nZadanie 5\n\n";

	char ulica[100], nr_domu[10], ocena[3], staz[3];
	cout << "Podaj nazwe ulicy, na ktorej mieszkasz: ";
	cin.get(ulica, 100);
	cout << "Podaj nr domu: ";
	cin >> nr_domu;
	cout << "Na ile oceniasz swoje umiejetnosci programowania w skali [2 - 5]: ";
	cin >> ocena;
	cout << "Twoj staz programistyczny: ";
	cin >> staz;
	cout << "Adres: " << ulica << nr_domu << "\n";
	cout << "Ocena: " << ocena << "\n";
	cout << "Staz: " << staz << " dni\n\n";

	//Zadanie 6
	cout << "Zadanie 6\n\n";

	char string[1000];
	cout << "Wprowadz tekst (max 1000 znakow)\n";
	cin.get(string, 1000);
	int spolgloski = 0, samogloski = 0;

	for (int i = 0; i < size(string); i++) {
		if (string[i] == 65 || string[i] == 69 || string[i] == 73 || string[i] == 79 || string[i] == 85 || string[i] == 89 || string[i] == 97 || string[i] == 101 || string[i] == 105 || string[i] == 111 || string[i] == 117 || string[i] == 121) samogloski++;
		else if (string[i] < 65 || string[i] > 122) cout << '\0';
		else if (string[i] > 90 && string[i] < 97) cout << '\0';
		else spolgloski++;
	}

	cout << "Tekst mial " << spolgloski << " spolglosek i " << samogloski << " samoglosek.";
}
