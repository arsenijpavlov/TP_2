//1) ������� ����� �� �����;
//2) ������� ��� �� �����, ������� ����� �� 0 �� 9 ������� ������, �����, ..., ��������
	//������� ������ ����������� � ����� ������
#include <iostream>
#include <fstream>
#include <string>
//#include <sstream>

using namespace std;

ifstream file;	//�������� ����

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "������� ��� �����: ";
	string name;
	char c;

	//enum num { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

	cin >> name;
	file.open(name);

	while (!file.eof()) {
		file >> c;
		switch(c){
		case '1':
			cout << " ���� ";
			break;
		case '2':
			cout << " ��� ";
			break;
		case '3':
			cout << " ��� ";
			break;
		case '4':
			cout << " ������ ";
			break;
		case '5':
			cout << " ���� ";
			break;
		case '6':
			cout << " ����� ";
			break;
		case '7':
			cout << " ���� ";
			break;
		case '8':
			cout << " ������ ";
			break;
		case '9':
			cout << " ������ ";
			break;
		case '0':
			cout << " ���� ";
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
	cout << endl;
	system("pause");
	return 0;
}