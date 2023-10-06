#include <iostream>
#include <cmath>

using namespace std;


int main() {
	int x, y, x2, y2, x3, y3; // Переменные точек
	cin >> x >> y >> x2 >> y2 >> x3 >> y3; // Задаем значение
	if ((x == x2 && y == y2) || (x == x3 && y == y3) || (x2 == x3 && y2 == y3)) { // Проверяем, чтобы они все не были в одном и том же месте.
		cout << "Points are equal";
		return 0; // если точки в одном месте, то останавливаем программу. 
	}
	double dist12 = sqrt((x - x2) * (x - x2) + (y - y2) * (y - y2)); // Нахождение длин сторон треугольника, путем использования формулы нахождения расстояния между двумя точками. Точки 1 и 2.
	double dist23 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));// Нахождение длин сторон треугольника, путем использования формулы нахождения расстояния между двумя точками. Точки 2 и 3.
	double dist13 = sqrt((x - x3) * (x - x3) + (y - y3) * (y - y3));// Нахождение длин сторон треугольника, путем использования формулы нахождения расстояния между двумя точками. Точки 1 и 3.
	double dist_ma = max(dist12, (max(dist23, dist13))); // Находим самую длинную.
	double dist_mi = min(dist12, (max(dist23, dist13))); // Находим самую короткую сторону. 
	double dist_mid = dist12 + dist23 + dist13 - dist_ma - dist_mi; // Находим среднюю сторону путем суммы всех сторон и вычитания из них max и min. 
	double eps = 1e-7;
	if (abs(dist_ma - dist_mi - dist_mid) < eps) { // Если длина максимума равна длине минимума + длина средняя, то это линия. 
		cout << "It is line";
	}
	// c^2 = a^2 + b^2
	else if (abs(dist_ma * dist_ma - dist_mi * dist_mi - dist_mid * dist_mid) < eps) {// Проверяем по теореме Пифогора что это за треугольник. Если верно это выражение, то это прямооугольник. 
		cout << "Treugolnik priamougolny";
	}
	else if ((dist_ma * dist_ma) > (dist_mi * dist_mi + dist_mid * dist_mid)) {// Проверяем по теореме Пифогора что это за треугольник. Если верно это выражение, то это тупоугольник. 
		cout << "Treugolnik tupougolny";
	}
	else {
		cout << "Treugolnik ostrougolny";
	}
	return 0;
}

