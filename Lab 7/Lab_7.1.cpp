// ConsoleApplication15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

// Функция вычисления среднего гармонического двух чисел
double sredgarm(double a, double b) {
    return 2 / (1 / a + 1 / b);
}

int main() {
    setlocale(LC_ALL, "Rus");
    std::cout << "Задание №1" << std::endl;
    // Ввод чисел
    double a, b;
    std::cout << "Введите два числа через пробел: ";
    std::cin >> a >> b;
    std::cout << "Результат вычисления среднего гармонического двух чисел: " << sredgarm(a, b); // Вывод результата

    std::cout << endl;
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
