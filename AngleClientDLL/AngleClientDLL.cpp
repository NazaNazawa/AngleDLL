#include <iostream>
#include <Windows.h>
#include <stdexcept>
#include "Angle.h"

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    cout << "--- Демонстрація роботи динамічної бібліотеки (DLL) ---\n" << endl;

    Angle a1;
    a1.Read();
    cout << "\nПерший кут: ";
    a1.Display();

    Angle a2;
    a2.Read();
    cout << "\nДругий кут: ";
    a2.Display();

    cout << "\nПерший кут у радіанах: " << a1.toRadians() << " рад" << endl;
    cout << "Синус першого кута: " << a1.getSine() << endl;

    int cmp = a1.compare(a2);
    if (cmp == 0) {
        cout << "Кути рівні." << endl;
    }
    else if (cmp > 0) {
        cout << "Перший кут більший за другий." << endl;
    }
    else {
        cout << "Перший кут менший за другий." << endl;
    }

    cout << "\nЗбільшуємо перший кут на величину другого:" << endl;
    a1.add(a2);
    cout << "Результат (a1): ";
    a1.Display();

    cout << "Зменшуємо перший кут на величину другого:" << endl;
    a1.subtract(a2);
    cout << "Результат (a1): ";
    a1.Display();

    return 0;
}