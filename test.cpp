#include <iostream>
#include "..\praktika\Geometria.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int num = 100;
	while (num) {
		cout << "����� ������?" << endl << "1. ���" << endl << "2. �����" << endl << "3. ������" << endl << "4. ���" << endl << "0 - �����" << endl;
		cin >> num;
		if (num == 1) {
			int var;
			cout << "1. �������" << endl << "2. �����" << endl;
			cin >> var;
			cout << "������� ������: ";
			double a;
			cin >> a;
			while (a <= 0)
			{
				cout << "������!! ������� ��� ���";
				cin >> a;
			}
			if (var == 1)
			{
				Ball ball;
				ball.radiuse = a;
				cout << ball.SquareBallRadiuse(a) << endl;
			}
			if (var == 2)
			{
				Ball ball;
				ball.radiuse = a;
				cout << ball.VolumeBallRadiuse(a) << endl;
			}
		}
		if (num == 2) {
			int var;
			cout << "1. �������" << endl << "2. �����" << endl;
			cin >> var;
			cout << "������� ������: ";
			double a;
			cin >> a;
			while (a <= 0)
			{
				cout << "������!! ������� ��� ���";
				cin >> a;
			}
			cout << "������� ������: ";
			double b;
			cin >> b;
			while (b <= 0)
			{
				cout << "������!! ������� ��� ���";
				cin >> a;
			}
			if (var == 1)
			{
				Cone cone;
				cone.radiuse = a;
				cone.height = b;
				cout << cone.SquareCone(a, b) << endl;
			}
			if (var == 2)
			{
				Cone cone;
				cone.radiuse = a;
				cone.height = b;
				cout << cone.VolumeCone(a, b) << endl;
			}
		}
		if (num == 3) {
			int var;
			cout << "1. �������" << endl << "2. �����" << endl;
			cin >> var;
			cout << "������� ������: ";
			double a;
			cin >> a;
			while (a <= 0)
			{
				cout << "������!! ������� ��� ���";
				cin >> a;
			}
			cout << "������� ������: ";
			double b;
			cin >> b;
			while (b <= 0)
			{
				cout << "������!! ������� ��� ���";
				cin >> a;
			}
			if (var == 1)
			{
				�ylinder cylinder;
				cylinder.radiuse = a;
				cylinder.height = b;
				cout << cylinder.Square�ylinderRadiuse(a, b) << endl;
			}
			if (var == 2)
			{
				�ylinder cylinder;
				cylinder.radiuse = a;
				cylinder.height = b;
				cout << cylinder.Volume�ylinderRadiuse(a, b) << endl;
			}
		}
		if (num == 4) {
			int var;
			cout << "1. �������" << endl << "2. �����" << endl;
			cin >> var;
			cout << "������� ������� ������: ";
			double a;
			cin >> a;
			while (a <= 0)
			{
				cout << "������!! ������� ��� ���";
				cin >> a;
			}
			cout << "������� ������� ������: ";
			double b;
			cin >> b;
			while (b <= 0)
			{
				cout << "������!! ������� ��� ���";
				cin >> a;
			}
			if (var == 1)
			{
				Tor tor;
				tor.radiuse = b;
				tor.Radiuse = a;
				cout << tor.SquareTor(a, b) << endl;
			}
			if (var == 2)
			{
				Tor tor;
				tor.radiuse = b;
				tor.Radiuse = a;
				cout << tor.VolumeTor(a, b) << endl;
			}
		}
		if (num == 0) {
			break;
		}
	}
}