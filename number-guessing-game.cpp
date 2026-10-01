#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	srand(time(0));

	int secretNumar = rand() % 100 + 1;
	int Incercari;
	int IncercariRamase = 7;
	cout << "=== Jocul: GHICESTE NUMARUL ===\n";
	cout << "Am ales un numar secret intre 1 si 100.\n";
	cout << "Ai la dispozitie: " << IncercariRamase << " incercari. Bafta!\n\n";

	while (IncercariRamase > 0) {
		cout << "Incercari ramase (" << IncercariRamase << "). Introdu numarul tau: ";
		cin >> Incercari;

		if (Incercari == secretNumar) {
			cout << "\nFelicitari! Ai ghicit numarul secret: " << secretNumar << "!\n";
			break;
		}
		else if (Incercari > secretNumar){
			cout << "Prea sus! Incearca un numar mai mic.\n\n";
		}
		else if (Incercari < secretNumar) {
			cout << "Prea jos! Incearca un numar mai mare.\n\n";
		}
		IncercariRamase--;
		if (IncercariRamase == 0) {
			cout << "\nAi pierut! Numarul secret era: " << secretNumar << ".\n";
		}
	}

	return 0;
}
