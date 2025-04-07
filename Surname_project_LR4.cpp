#include <iostream>

using namespace std;


// Глобальные переменные для хранения чисел
int A, B, C;

// Заглушка метода для ввода чисел
void inputNumbers() {
    // Реализация будет добавлена позже
    cout << "Введите целое число A: ";
    cin >> A;
    cout << "Введите целое число B: ";
    cin >> B;
    cout << "Введите целое число C: ";
    cin >> C;
    cout << "Числа успешно введены.\n";
}

// Заглушка метода для вычисления остатка
void calculateRemainder() {
    if (C == 0) {
        cout << "Ошибка: Деление на ноль невозможно.\n";
        return;
    }
    int remainder = (A + B) % C;
    cout << "Остаток от деления суммы " << A + B << " на " << C << " равен " << remainder << ".\n";
}

// Заглушка метода для вычисления целой части
void calculateQuotient() {
    if (C == 0) {
        cout << "Ошибка: Деление на ноль невозможно.\n";
        return;
    }
    int quotient = (A + B) / C;
    cout << "Целая часть от деления суммы " << A + B << " на " << C << " равна " << quotient << ".\n";
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
    