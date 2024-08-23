#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    int mass[10]; 

    cout << "Введите 10 чисел для заполнения массива: " << endl;

    for (int i = 0; i < 10; i++) {
        cin >> mass[i];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (mass[j] > mass[j + 1]) {
                int b = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = b;
            }
        }
    }

    cout << "Массив в отсортированном виде: ";

    for (int i = 0; i < 10; i++) {
        cout << mass[i] << " ";
    }
}