#include <iostream>

using namespace std;

// Заглушка метода для ввода чисел
void inputNumbers() {
    // Реализация будет добавлена позже
}

// Заглушка метода для вычисления остатка
void calculateRemainder() {
    // Реализация будет добавлена позже
}

// Заглушка метода для вычисления целой части
void calculateQuotient() {
    // Реализация будет добавлена позже
}

// Отображение меню
void displayMenu() {
    cout << "\nМеню:\n";
    cout << "1. Ввести числа\n";
    cout << "2. Найти остаток от деления суммы на число\n";
    cout << "3. Найти целую часть от деления суммы на число\n";
    cout << "4. Выход\n";
    cout << "Выберите пункт: ";
}

int main() {
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            inputNumbers();
            break;
        case 2:
            calculateRemainder();
            break;
        case 3:
            calculateQuotient();
            break;
        case 4:
            cout << "Выход из программы." << endl;
            break;
        default:
            cout << "Неверный выбор. Попробуйте снова." << endl;
        }
    } while (choice != 4);

    return 0;
}
    