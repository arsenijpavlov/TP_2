//1) Считать текст из файла;
//2) Вывести его на экран, заменив цифры от 0 до 9 словами «ноль», «один», ..., «девять»
	//Начинать каждое предложение с новой строки
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
	bool f = true;

	try {
		cin >> name;
		file.open(name);
		// файл не существует
		if (!file)
			throw 1;
		// файл пуст
		if (file.peek() == ifstream::traits_type::eof())
			throw 2;
	}
	catch (int i) {
		f = false;
		cout << "Ошибка №" << i << ": ";
		switch (i) {
		case 1:	
			cout << "Неверное имя файла" << endl;
			break;
		case 2:
			cout << "Файл пустой" << endl;
			file.close();
			break;
		}
	}
	
	if (f) {
		while (!file.eof()) {
			//file >> c;
			// Если работать только с символами, то пробелы отображаются некорректно
			while (getline(file, line, '\n')) { //сперва загружаем текст в строку, а затем из строки рассматриваем по символу
				for (int i = 0; i < line.size(); i++) {
					c = line[i];
					switch (c) {
					//замена цифр на слова
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
					//конец ПРЕДЛОЖЕНИЯ и переход на новую строку
					case '.':
					case '!':
					case '?':
						cout << c << endl;
						break;
					//копирование символа из файла на экран
					default:
						cout << c;
					}
				}
			}
		}
		file.close();
	}
	cout << endl;
	std::system("pause");
	return 0;
}