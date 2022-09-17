#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	//Begin8.Даны два числа a и b.
	//Найти их среднее арифметическое : (a + b) / 2
	/*int a = 1;
	int b = 2;
	double avg = (a + b) / 2.0;// int разделить на int  - получается int
	cout << avg;*/

	//sqrt(a*b) sqrt - квадратный корень
	//abs(a) abs - модуль
	
	//Begin9.Даны два неотрицательных числа a и b.Найти их среднее
	//геометрическое, то есть квадратный корень из их произведения : 
	//√a*b
	/*int a = 4;
	int b = 5;
	double g_avg = sqrt(a*b);
	cout << g_avg;*/

	//Begin10.Даны два ненулевых числа.Найти сумму, разность, произведение и
	//частное их квадратов.
	//Дано a,b
	/*int a, b;
	cin >> a >> b;
	int res;
	res = a * a + b * b;
	cout << "Summa = " << res << endl;//endl - перевод курсора на новую строку
	res = a * a - b * b;
	cout << "Raznost = " << res << endl;
	res = a * a * b * b;
	cout << "Proizvedenie = " << res << endl;
	double res1;
	res1 = (a * a) / (double)(b * b);
	cout << "Chastnoe = " << res1 << endl;*/
	//Begin11. Даны два ненулевых числа.Найти сумму, разность, произведение и
	//частное их модулей.
	int a, b;
	cin >> a >> b;
	int res;
	res = abs(a) + abs(b);
	cout << "Сумма модулей = " << res << endl;
	double res1 = (double)abs(a) / abs(b);
	cout << "Частное модулей = " << res1 << endl;
}