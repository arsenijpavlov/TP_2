//1) Считать текст из файла;
//2) Вывести его на экран, заменив цифры от 0 до 9 словами «ноль», «один», ..., «девять»
	//Начиная каждое предложение с новой строки
#include <iostream>
#include <fstream>
#include <string>
#include <exception>

using namespace std;

ifstream file;	//исходный файл

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Введите имя файла: ";
	string name, line;
	char c;

	//enum num { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

	try {
		cin >> name;
		file.open(name);
	}
	catch (...) {
		cout << "Неверное имя файла" << endl;
	}

	while (!file.eof()) {
		//file >> c;
		// Если работать только с символами, то пробелы отображаются некорректно
		while (getline(file, line, '\n')) {
			for (int i = 0; i < line.size(); i++) {
				c = line[i];
				switch (c) {
				case '1':
					cout << " ОДИН ";
					break;
				case '2':
					cout << " ДВА ";
					break;
				case '3':
					cout << " ТРИ ";
					break;
				case '4':
					cout << " ЧЕТЫРЕ ";
					break;
				case '5':
					cout << " ПЯТЬ ";
					break;
				case '6':
					cout << " ШЕСТЬ ";
					break;
				case '7':
					cout << " СЕМЬ ";
					break;
				case '8':
					cout << " ВОСЕМЬ ";
					break;
				case '9':
					cout << " ДЕВЯТЬ ";
					break;
				case '0':
					cout << " НОЛЬ ";
					break;
				case '.':
				case '!':
				case '?':
					cout << c << endl;
					break;
				default:
					cout << c;
				}
			}
		}
	}
	cout << endl;
	system("pause");
	return 0;
}