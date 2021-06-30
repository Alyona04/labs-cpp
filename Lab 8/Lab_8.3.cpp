﻿// ConsoleApplication12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


double sredneearifm(int* a, int n) { // функция определения среднего арифметического
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum /= n;
}
int main() {
	setlocale(LC_ALL, "Rus");
	std::cout << "Задание №3" << std::endl;
	int N;
	std::cout << "Введите размер массива: ";
	std::cin >> N;

	int* a = new int[N]; // создание и заполнение динамического массива
	std::cout << "Заполните массив через пробел: " << endl;
	for (int i = 0; i < N; i++)
		std::cin >> a[i];

	// вывод результата
	std::cout << "Среднее арифметическое значений массива: " << sredneearifm(a, N);
	return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.