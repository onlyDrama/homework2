#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cmath>
#include <fstream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <algorithm>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include <iomanip>
using namespace std;
const int a = 1;
const int error = 404;
#define graphic(x) (tan(x)) //график который будет строится

void fillArr(int n, int* const arr);
void print_gr();
unsigned int PRNG();
int simple(int n);
string to_base2(int n);
string reverse(string str);
void bubble(char* i, int n)
{
	int a, b;
	char t;

	for (a = 0; a < n; a++)
		for (b = n - 1; b >= a; b--)
		{
			if (i[b - 1] > i[b])
			{
				t = i[b - 1];
				i[b - 1] = i[b];
				i[b] = t;
			}
		}

}

void addNums_to_file(int n, int* const arr)
{
	std::ofstream fout("D:\\file1\\t.txt");
	if (!fout.is_open())
	{
		std::cout << 404;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			fout << arr[i] << std::endl;
		}
	}
	fout.close();

}

void getSum_from_file()
{
	std::ifstream fin("D:\\file1\\t.txt");
	if (fin.is_open())
	{
		int a, sum = 0;

		while (fin >> a)
		{
			sum += a;
		}
		std::cout << "sum=" << sum << "\n";
	}

	fin.close();


}
int signX(int x)
{
	if (x > 0)
		return 1;
	if (x == 0)
		return 0;
	if (x < 0)
		return -1;
}
double getS_of_triangle(double a, double h)
{
	double s = 0.5 * a * h;
	return s;
}
long double getS_of_triangle(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	long double s = sqrt(p * (p - a) * (p - b) * (p - c));
	if (s >= 0)
		return s;
	else
		return 404;
}
double getS_of_square(double a, double b)
{
	double s = a * b;
	return s;
}
double getS_of_circle(double r)
{
	double p = 3.14;
	double s = p * pow(r, 2);
	return s;
}
void flag(int n, int m)
{
	int* a;

	//a = (int*) std::malloc(n * m * sizeof(int));
	a = new int(n * m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			//std::cin >> *(a + i * m + j);
			std::cout << *(a + i * m + j);
		}
}

unsigned int print_random(int m, int i, int c)
{
	static unsigned int s = 0;
	return s = (m * s + i) % c;
}
float C[3][2];

void matrix() {
	int A[3][4] = { {5, 2, 0, 10}, {3, 5, 2, 5}, {20, 0, 0, 0} };
	float B[4][2] = { {1.2, 0.5}, {2.8, 0.4}, {5, 1}, {2, 1.5} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			C[i][j] = 0;
			C[i][j] += A[i][0] * B[0][j] + A[i][1] * B[1][j] + A[i][2] * B[2][j] + A[i][3] * B[3][j];
		}
	}
	cout << setw(15) << "C = AxB\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << setw(8) << C[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

int gain(bool max) {
	int out = 0;
	if (max) {
		float cmp = 0;
		for (int i = 0; i < 3; i++) {
			if (C[0][i] - C[1][i] > cmp) {
				cmp = C[i][0];
				out = i + 1;
			}
		}
	}
	else {
		float cmp = 1024;
		for (int i = 0; i < 3; i++) {
			if (C[0][i] - C[1][i] < cmp) {
				cmp = C[i][0];
				out = i + 1;
			}
		}
	}
	return(out);
}

int comm(bool max) {
	int out = 0;
	if (max) {
		float cmp = 0;
		for (int i = 0; i < 3; i++) {
			if (C[1][i] > cmp) {
				cmp = C[i][0];
				out = i + 1;
			}
		}
	}
	else {
		float cmp = 1024;
		for (int i = 0; i < 3; i++) {
			if (C[1][i] < cmp) {
				cmp = C[i][0];
				out = i + 1;
			}
		}
	}
	return(out);
}

float msumm() {
	float out = 0;
	for (int i = 0; i < 3; i++) {
		out += C[i][0] - C[i][1];
	}
	return(out);
}

float csumm() {
	float out = 0;
	for (int i = 0; i < 3; i++) {
		out += C[i][1];
	}
	return(out);
}

void getCase11();
void getCase12(int a, int b);
double getCase13(double b, double c);
void getCase14(double a, double b, double c);
void getCase15(bool isday, bool islight, bool arestorsopened);
void getCase21(double h, double r, double l, double R);
double getCase22(double x, double a);
double getCase23(double x, double y, double b);
void getCase24(int start);
double getCase25(double x);
double getCase31(double s, double n, double p);
void copyFile(std::string file_name, std::string scd_file_name);



void show_Homework1();
void show_Homework2();
void show_Homework3();
void show_Homework4();
void show_Homework5();



int main()

{	

	setlocale(LC_ALL, "rus");
	int n = 10;
	cin >> n;
	if (n == 1) { show_Homework1(); }
	if (n == 2) { show_Homework2(); }
	if (n == 3) { show_Homework3(); }
	if (n == 4) { show_Homework4(); }
	if (n == 5) { show_Homework5(); }

	
	
	
	return 0;
}


void getCase11() {
	cout << "Артём" << endl;
}


void getCase12(int a, int b)
{
	cout << a + b << endl << a - b << endl << a * b;
	if (b != 0) { cout << a % b; }
	else cout << error;
}


double getCase13(double b, double c)
{
	double x = -c / b;
	if (b != 0)
	{
		return x;
	}
	else return error;
}


void getCase14(double a, double b, double c)
{
	double x1, x2;
	double discr;
	
	discr = b * b - 4 * a * c;
	if (discr < 0) 
		cout << error;
	x1 = (-b + sqrt(discr)) / (2 * a);
	x2 = (-b - sqrt(discr)) / (2 * a);
	cout << "x1 равняется:" << " " << x1 << endl;
	cout << "x2 равняется:" << " " << x2 << endl;

}


void getCase15(bool is_day, bool is_light, bool are_shtors_opened)
{
	int is_it_light_in_the_room;
	if ((is_day && are_shtors_opened) || is_light) { is_it_light_in_the_room = 1; }
	if (is_it_light_in_the_room == 1) { cout << "В комнате светло" << endl; }
	else cout << "В комнате темно" << endl;
}

void getCase21(double h, double r, double l, double R)
{
	double v = (1 / 3) * 3.14 * h * (pow(R, 2) + R * r + pow(r, 2)), s = 3.14 * (pow(R,2) + (R + r)* l + pow(r,2));
	cout << v << " " << s << endl;
}

double getCase22(double x, double a)
{
	double w = 1;

	if (x != 0)
	{
		if (fabs(x) < 1)
		{
			x = fabs(x);
			w = a * log(x); // íàòóðàëüíûé ëîãàðèôì

			return  w;
		}

		if (fabs(x) >= 1)
		{
			if (a - pow(x, 2) < 0)
			{
				return error;
			}
			if (fabs(x) >= 1)
			{
				w = sqrt((a - pow(x, 2)));
				return w;
			}
		}
	}

	else
	{
		return error;
	}
}

double getCase23(double x, double y, double b)
{
	double z;

	if (b - y < 0 && b - x < 0)
	{
		return error;
	}

	if (x == 0 && y == 0 && b == 0)
	{
		return error;
	}

	if (b - y > 0 && b - x >= 0)
	{
		z = log(b - y) * sqrt(b - x);

		return z;
	}
	else
	{
		return error;
	}

}

void getCase24(int start)
{
	for (int i = start; i <= start + 10; i++)
	{
		cout << i << endl;
	}
}

double getCase25(double x)
{
	double y = (pow(x, 2) - 2.0 * x + 2) / (x - 1.0);
	if (x != 1)
	{
		return y;

	}
	else
	{
		return error;
	}
}


double getCase31(double s, double n, double p) // s - Çàéì, m - ìåñÿ÷íàÿ âûïëàòà, n - êîëè÷åñòâî ìåñÿöåâ , p - ïðîöåíò
{
	n = (n / 12);

	double r = p / 100;

	if (r != 0)
	{
		double m = (s * r * pow((1 + r), n)) / (12 * ((pow((1 + r), n) - 1)));
		return m;
	}
	else
	{
		return error;
	}
}

void copyFile(std::string file_name, std::string scd_file_name)
{
	setlocale(LC_ALL, "ru");

	std::ifstream file(file_name);
	std::string str;
	if (!file)
	{
		std::cout << error;
	}
	else
	{
		std::string s;
		for (file >> s; !file.eof(); file >> s)
		{
			std::cout << s << std::endl;
		}
		system("copy D:\\file1\\t.txt D:\\file2 /Y");


	}
}
void fillArr(int n, int* const arr)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
int simple(int n)
{
	for (int i = 2; i <= n / 2; i++) if ((n % i) == 0) return 0;
	return 1;
}
string to_base2(int n)
{
	string base;

	while (n)
	{
		base += to_string(n % 2);
		n /= 2;
	}
	return base;
}
string reverse(string str)
{
	string base;
	int size = 0;
	for (int i = 0; i < str.size(); i++)
	{
		size++;
	}
	for (int i = size; i >= 0; i--)
	{
		base += str[i];
	}
	return base;
}


void print_gr()
{
	float x;
	HDC hDC = GetDC(GetConsoleWindow());
	HPEN Pen = CreatePen(PS_SOLID, 2, RGB(241, 249, 8));
	SelectObject(hDC, Pen);
	MoveToEx(hDC, 0, 85, NULL);
	LineTo(hDC, 200, 85);
	MoveToEx(hDC, 100, 0, NULL);
	LineTo(hDC, 100, 170);
	for (x = -8.0f; x <= 8.0f; x += 0.01f) // O(100,85) - center
	{
		MoveToEx(hDC, 10 * x + 100, -10 * graphic(x) + 85, NULL);//10 - scale
		LineTo(hDC, 10 * x + 100, -10 * graphic(x) + 85);
	}
	std::cout << "\n\n\n\n\n\n";
}


unsigned int PRNG()
{
	// Наше стартовое число - 4 541
	static unsigned int seed = 4541;

	// Берем стартовое число и, с его помощью, генерируем новое значение.
	// Из-за использования очень больших чисел (и переполнения) угадать следующее число исходя из предыдущего - очень сложно
	seed = (8253729 * seed + 2396403);

	// Берем стартовое число и возвращаем значение в диапазоне от 0 до 32767
	return seed % 32768;
}

void show_Homework1()
{
	cout << "Домашнее задание 1" << endl;
	cout << "0 - конец программы" << endl;
	int n = 10;
	while(n)
	{
		cin >> n;
		if (n == 1) { getCase11(); }
		if (n == 2) 
		{
			cout << "Введите значения для a и b" << endl;
			int a, b;
			cin >> a >> b;
			getCase12(a, b);
		}
		if (n == 3) 
		{
			int b, c;
			cout << "Введите значения для b и c" << endl;
			cin >> b >> c;
			cout << getCase13(b, c);
		}
		if (n == 4) 
		{ 
			double a, b, c;
			cout << "Введите значения для a, b и c" << endl;
			cin >> a >> b >> c;
			getCase14(a, b, c); 
		}
		if (n == 5)
		{
			bool is_day, is_light, are_shtors_opened;
			cout << "Введите значения 1 - правда, 0 - ложь как ответы на вопросы" << endl;
			cout << "На улице день? " << endl;
			cin >> is_day;
			cout << "Шторы раздвинуты?" << endl;
			cin >> are_shtors_opened;
			cout << "Включена лампа?" << endl;
			cin >> is_light;
			getCase15(is_day, is_light, are_shtors_opened);
		}

	}
}


void show_Homework2()
{

	int n = 1000; // номер задания
	cout << "Домашнее задание 2" << endl;
	cout << "0 - конец программы" << endl;

	while (n)
	{
		cin >> n;
		if (n == 1)
		{
			double h, r, l, R;
			cout << "Введите значения для h, r, l, R" << endl;
			cin >> h >> r >> l >> R;
			getCase21(h, r, l, R);
		}
		if (n == 2)
		{
			double x, a;
			cout << "\nВведите число x: ";
			cin >> x;
			cout << "\nВведите число a: ";
			cin >> a;

			cout << "Модуль x: " << fabs(x) << " " << "Модуль a: " << fabs(a) << endl;

			if (getCase22(x, a) == error)
			{
				cout << error << endl;;
			}
			else
			{
				cout << "\nРезультат :" << getCase22(x, a) << endl;
			}

		}

		if (n == 3)
		{
			double x, y, b;
			cout << "\nВведите x: " << endl;
			cin >> x;
			cout << "\nВведиту y: " << endl;
			cin >> y;
			cout << "\nВведите b: " << endl;
			cin >> b;

			if (getCase23(x, y, b) == error)
			{
				cout << error;
			}
			if (getCase23(x, y, b) != error)
			{
				cout << "Результат :" << getCase23(x, y, b);
				cout << endl;
			}
		}

		if (n == 4)
		{
			cout << "\nВведите начальное число: " << endl;
			int i;
			cin >> i;
			getCase24(i);
		}

		if (n == 5)
		{
			cout << "\nпротабулировать функцию\n" << endl;

			for (int i = -4; i < 5; i += 1)
			{
				cout << getCase25(i) << "\t";


			}
		}
	}
}


void show_Homework3()
{
	cout << "Homework 3" << endl;
	int n = 1000;
	cout << "0 - Конец программы" << endl;
	while (n != 0)
	{
		cin >> n;

		if (n == 1)
		{
			double s, n, p;
			cout << "Задание 1" << endl;
			cout << "Введите s - Сумма кредита : " << endl;
			cin >> s;
			cout << "Введите n - количество месяцев : " << endl;
			cin >> n;
			cout << "Введите p - %: " << endl;
			cin >> p;
			if (getCase31(s, n, p) == error)
			{
				cout << error;
			}
			else
			{

				cout << "\nМесячная выплата: " << getCase31(s, n, p) << endl;
			}


		}


		if (n == 2)
		{//p for s m n Сумма процентов по займу = Сумма займа * Процентная ставка / 365 (366) дней * Количество дней пользования займом;
			
			n = (n / 12);
			
		}
		if (n == 3)
		{
			string fn = "D:\\file1\\t.txt";
			string to = "C:\\file2";
			copyFile(fn, to);

		}
		if (n == 4)
		{
			string file_name = "D:\\file1\\t.txt";
			cout << file_name;
		}
		if (n == 5)
		{
			std::string a;
			std::cin >> a;
			std::sort(begin(a), end(a));
			std::cout << a << "\n";
		}
	}
}


void show_Homework4()
{
	cout << "Homework 4" << endl;
	int w = 1;
	while (w)
	{
		cin >> w;
		if (w == 1) {
			int n;
			cout << "Enter amount of elements ";
			cin >> n;
			cout << endl;
			int* arr = new int[n];

			fillArr(n, arr);
			addNums_to_file(n, arr);
			getSum_from_file();
			cout << endl;
			delete[] arr;
		}
		if (w == 2)
		{
			cout << "Enter x ";
			int x;
			cin >> x;
			cout << signX(x);
			cout << endl;
		}
		if (w == 3)
		{
			int x, var = 10;
			cout << "Choose th tesk 1, 2, 3\n";
			while (var)
			{
				cin >> var;
				if (var == 1) {
					cout << "Choose the way 1 - common or 2 - Heron 's Formula\n";
					cin >> x;
					if (x == 1)
					{
						double a, h;
						cout << "Enter a, h \n";
						cin >> a >> h;
						cout << "\n";
						cout << "S of Triangle ";
						cout << getS_of_triangle(a, h);
						cout << "\n";
					}
					if (x == 2)
					{
						double a, b, c;
						cout << "Enter a, b, c \n";
						cin >> a >> b >> c;
						cout << "\n";
						cout << "S of Triangle ";
						cout << getS_of_triangle(a, b, c);
						cout << "\n";
					}
				}
				if (var == 2)
				{
					double a, b;
					cout << "Enter a and b \n";
					cin >> a >> b;
					cout << "\nS of square";
					cout << getS_of_square(a, b);
					cout << "\n";
				}
				if (var == 3)
				{
					double r;
					cout << "Enter r ";
					cin >> r;
					cout << "\nS of circle ";
					cout << getS_of_circle(r);
					cout << "\n";
				}
			}
		}
		if (w == 4)
		{
			int num, sl = 10;
			string text = "'Былая слава' - 1912 г.'";
			cout << "Печать 'Былой славы'." << endl;
			cout << endl;

			for (int z = 0; z < text.length(); z++)
			{
				Sleep(sl);
				cout << text[z];
			}




			cout << endl << endl;
			for (int j = 0; j < 16; j++)
			{
				Sleep(sl);
				cout << "-" << " ";
			}
			for (int j = 0; j < 15; j++)
			{
				Sleep(sl);
				cout << "-" << " ";
			}
			cout << endl;


			for (int i = 1; i <= 48; i++) {
				Sleep(sl);
				cout << "*" << " ";
				if (i % 8 == 0) {
					if (i == 16 || i == 32 || i == 48) {
						for (int j = 0; j < 23; j++) {
							Sleep(sl);
							cout << "-" << " ";
						}
					}
					cout << endl;
				}

			}

			for (int q = 0; q < 3; q++) {
				Sleep(sl);
				cout << endl;
				for (int j = 0; j <= 30; j++) {
					Sleep(sl);
					cout << "-" << " ";
				}
				cout << endl;
			}
		}
		if (w == 5)
		{
			print_gr();
		}
		if (w == 6)
		{

		}
		if (w == 7)
		{
			int count_of_el, m, i, c;
			cin >> count_of_el >> m >> i >> c;

			cout << endl;
			for (int j = 0; j < count_of_el; j++)
			{
				cout << print_random(m, i, c) << " ";
			}
		}
		if (w == 8)
		{

			matrix();
			cout << "Больше всего денег выручил продавец " << gain(1) << endl;
			cout << "Меньше всего денег выручил продавец " << gain(0) << endl;
			cout << endl;
			cout << "Наибольшие комиссионные получил продавец " << comm(1) << endl;
			cout << "Наименьшие комиссионные получил продавец " << comm(0) << endl;
			cout << endl;
			cout << "Общая сумма вырученных денег: " << msumm() << endl;
			cout << "Общая сумма комиссионных: " << csumm() << endl;
			cout << "Через руки продавцов прошло: " << msumm() + csumm() << endl;
		}
	}
}


void show_Homework5()
{
	cout << "Homework 5" << endl;
	int n = 1;
	while (n)
	{
		cin >> n;

		if (n == 1)
		{
			int a, b;
			cin >> a >> b;
			while (a != 0 && b != 0)
			{
				if (a > b)
					a = a % b;
				else
					b = b % a;
			}
			cout << a + b;
			cout << endl;
		}
		if (n == 2)
		{
			int end;
			cin >> end;
			for (int i = 2; i < end; i++)
				if (simple(i))
					cout << i << " ";
			cout << endl;
		}
		if (n == 3)
		{
			cout << " 12 " << endl;
			std::string line;

			std::ifstream in("D:\\file2\\t.txt"); // окрываем файл для чтения
			if (in.is_open())
			{
				while (getline(in, line))
				{
					std::cout << line << std::endl;
				}
			}
			in.close();     // закрываем файл
			cout << " 13 " << endl;
			string outf;
			cin >> outf;

			std::ofstream out("D:\\file2\\t.txt", std::ios::app); // поток для записи
			if (out.is_open())
			{
				out << outf << std::endl;
			}
			out.close();

		}
		if (n == 4)
		{
			int maxcount = 0;
			cout << "19" << endl;
			int amount, sum = 0;
			cin >> amount;
			int* classmates = new int[amount];

			for (int i = 0; i < amount; i++)
				cin >> classmates[i];
			cout << endl;

			for (int i = 0; i < amount; i++)
				sum = sum + classmates[i];

			float end = sum / amount;
			cout << end << endl; 
				for (int i = 0; i < amount; i++)
				{
					if (classmates[i] > end)
					{
						maxcount++;
					}
				}
			cout << endl << maxcount << endl;

			cout << "28" << endl;

			int num, sn = 0;
			cin >> num;
			cout << endl;

			while (num)
			{
				sn = sn + num % 10;
				num /= 10;
			}

			cout << sn << endl;


		}
		if (n == 5)
		{
			cout << "15" << endl;
			std::string line;
			string outf;

			std::ifstream in("D:\\file2\\t2.txt"); // окрываем файл для чтения
			if (in.is_open())
			{
				while (getline(in, line))
				{
					// Use std::stoi() to convert string to integer
					int res = stoi(line);


					outf = to_base2(res);
					outf = reverse(outf);

					std::ofstream out("D:\\file2\\t3.txt", std::ios::app); // поток для записи
					if (out.is_open())
					{
						out << outf << std::endl;
					}
					out.close();
				}
			}
			in.close();     // закрываем файл
		}
	}



}

