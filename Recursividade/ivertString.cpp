#include <iostream>

using namespace std;

void inverteString(char str[], int inicio, int fim){
	if( inicio >= fim) return;
	
	swap(str[inicio], str[fim]);
	
	inverteString(str, inicio+1, fim-1);
}

int main(){
	char str[100];
	cout << "Digite uma string : ";
	cin >> str;
	
	inverteString(str, 0, strlen(str)-1);
	
	cout << "String Invertida : " << str << endl;
	system("pause");
}