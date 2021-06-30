// ConsoleApplication10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Задание №1" << endl;
    int length;
    // Ввод количества чисел массива
    std::cout << "Введите количество чисел: ";
    std::cin >> length;

    int* numbers = new int[length];
    for (int i = 0; i < length; i++) {
        numbers[i] = rand() % 100 - 50;
    }

    std::cout << "Исходный массив: ";
    for (int i = 0; i < length; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << endl;

    int lengthPositiveNumbersArray = 0, currentElement = 0;
    for (int i = 0; i < length; i++) {
        if (numbers[i] >= 0) {
            lengthPositiveNumbersArray++;
        }
    }
    int* positiveNumbers = new int[lengthPositiveNumbersArray];
    for (int i = 0; i < length; i++) { // Исключение отрицательных чисел
        if (numbers[i] >= 0) {
            positiveNumbers[currentElement] = numbers[i];
            currentElement++;
        }
    }
    // Вывод массива без отрицательных чисел
    std::cout << "Массив без отрицательных чисел: ";
    for (int i = 0; i < lengthPositiveNumbersArray; i++) {
        std::cout << positiveNumbers[i] << " ";
    }
    std::cout << endl;

    delete[] numbers;
    delete[] positiveNumbers;
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
