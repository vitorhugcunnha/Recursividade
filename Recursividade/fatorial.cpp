#include <iostream>

using namespace std;

int main(){
	int total, numero, i;
	
	system("cls");
	cout << "Numero para fatorar : ";
	cin >> numero;
	
	total = 1;
	for(i = numero; i > 1; i--){
		total *= i;
	}
	
	cout << "O fatorial de " << numero << " eh igual a " << total << endl;
	system("pause");
}