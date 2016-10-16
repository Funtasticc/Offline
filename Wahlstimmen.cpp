#include <iostream>
using namespace std;

int main()
{
	int ges = 0, kan_1 = 0, kan_2 = 0;

		cout << "Bitte geben sie die gesamtzahl der gueltigen Stimmen ein: ";
		cin >> ges;
		cout << "Bitte geben Sie die Anzahl Stimmen des ersten Kandidaten ein: ";
		cin >> kan_1;
		cout << "Bitte geben Sie die Anzahl Stimmen des zweiten Kandidaten ein: ";
		cin >> kan_2;

		int stimmen3 = ges - kan_1 - kan_2;

		cout << "Auf den dritten Kandidaten sind somit "	
				<< stimmen3 << " Stimmen entfallen." << endl;

		cout << "Kandidat 1 erhielt "
				<< kan_1 * 100. / ges
				<< "% der Stimmen." << endl;

		cout << "Kandidat 2 erhielt "
				<< kan_2 * 100. / ges
				<< "% der Stimmen." << endl;

		cout << "Kandidat 3 erhielt "
				<< stimmen3 * 100. / ges
				<< "% der Stimmen." << endl;

		system("PAUSE");
}
