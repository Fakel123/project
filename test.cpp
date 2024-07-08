#include <iostream>
#include "..\praktika\Geometria.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int num = 100;
	while (num) {
		cout << "Какая фигура?" << endl << "1. Шар" << endl << "2. Конус" << endl << "3. Цилинд" << endl << "4. Тор" << endl << "0 - выход" << endl;
		cin >> num;
		if (num == 1) {
			int var;
			cout << "1. Площадь" << endl << "2. Объем" << endl;
			cin >> var;
			cout << "Введите радиус: ";
			double a;
			cin >> a;
			while (a <= 0)
			{
				cout << "ошибка!! Введите еще раз";
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
			cout << "1. Площадь" << endl << "2. Объем" << endl;
			cin >> var;
			cout << "Введите радиус: ";
			double a;
			cin >> a;
			while (a <= 0)
			{
				cout << "ошибка!! Введите еще раз";
				cin >> a;
			}
			cout << "Введите высоту: ";
			double b;
			cin >> b;
			while (b <= 0)
			{
				cout << "ошибка!! Введите еще раз";
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
			cout << "1. Площадь" << endl << "2. Объем" << endl;
			cin >> var;
			cout << "Введите радиус: ";
			double a;
			cin >> a;
			while (a <= 0)
			{
				cout << "ошибка!! Введите еще раз";
				cin >> a;
			}
			cout << "Введите высоту: ";
			double b;
			cin >> b;
			while (b <= 0)
			{
				cout << "ошибка!! Введите еще раз";
				cin >> a;
			}
			if (var == 1)
			{
				Сylinder cylinder;
				cylinder.radiuse = a;
				cylinder.height = b;
				cout << cylinder.SquareСylinderRadiuse(a, b) << endl;
			}
			if (var == 2)
			{
				Сylinder cylinder;
				cylinder.radiuse = a;
				cylinder.height = b;
				cout << cylinder.VolumeСylinderRadiuse(a, b) << endl;
			}
		}
		if (num == 4) {
			int var;
			cout << "1. Площадь" << endl << "2. Объем" << endl;
			cin >> var;
			cout << "Введите больший радиус: ";
			double a;
			cin >> a;
			while (a <= 0)
			{
				cout << "ошибка!! Введите еще раз";
				cin >> a;
			}
			cout << "Введите меньший радиус: ";
			double b;
			cin >> b;
			while (b <= 0)
			{
				cout << "ошибка!! Введите еще раз";
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