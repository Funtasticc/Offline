#include <iostream>
using namespace std;

int main()
{
	double seitenlaenge;
	// Ausgabe des Textes
	cout << "Bitte geben sie die Seitenlaenge in cm ein:";
	// Hier soll die Seitenlaenge eingegeben werden
	cin >> seitenlaenge;
	// Programm zur Ausgabe des Umfangs
	cout << "Der Umfang betraegt in cm: " << 4 * seitenlaenge << endl;
	// Programm zur Berechnung des Flächeninhalts
	cout << "Die Flaeche des Quadrats betraegt in cm*cm: " << seitenlaenge * seitenlaenge << endl;

	system("PAUSE");

	return 0;

}