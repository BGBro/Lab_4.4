// Lab_04_4.cpp
// Горбачов Богдан
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 3

#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main()
{
	double x, xk, dx, R, y;

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> x;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	while (x <= xk)
	{
		if (x <= -7 - R)
			y = R;
		else
			if (-7 - R < x && x <= -7 + R)
				y = R - sqrt(pow(R, 2) - pow(x, 2) - 14 * x - 49);
			else
				if (-7 + R < x && x <= -4)
					y = R;
				else
					if (-4 < x && x <= 0)
						y = -(R * x) / 4;
					else
						if (0 < x && x <= acos(-1))
							y = sin(x);
						else
							y = x - acos(-1);

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}
	cout << "---------------------------" << endl;

	system("pause");
}