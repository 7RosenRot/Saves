#include "ComplexNumbers.h"

ComplexNumbers::ComplexNumbers(float first, float second) : real_number(first), imaginary_unit(second) {}

void ComplexNumbers::To_Withdraw() const {
    if (imaginary_unit > 0)
        cout << real_number << " + " << imaginary_unit << 'i' << endl;
    else
        cout << real_number << " - " << -1 * imaginary_unit << 'i' << endl;
}

ComplexNumbers ComplexNumbers::operator+(const ComplexNumbers &second) const {
    return ComplexNumbers(real_number + second.real_number, imaginary_unit + second.imaginary_unit);
}

ComplexNumbers ComplexNumbers::operator-(const ComplexNumbers &second) const {
    return ComplexNumbers(real_number - second.real_number, imaginary_unit - second.imaginary_unit);
}

ComplexNumbers ComplexNumbers::operator*(const ComplexNumbers &second) const {
    return ComplexNumbers(real_number * second.real_number - imaginary_unit * second.imaginary_unit, real_number * second.imaginary_unit + imaginary_unit * second.real_number);
}

ComplexNumbers ComplexNumbers::operator/(const ComplexNumbers &second) const {
    float denominator = second.real_number * second.real_number + second.imaginary_unit * second.imaginary_unit;
    return ComplexNumbers((real_number * second.real_number + imaginary_unit * second.imaginary_unit) / denominator, 
                          (imaginary_unit * second.real_number - real_number * second.imaginary_unit) / denominator);
}

ComplexNumbers ComplexNumbers::operator=(const ComplexNumbers &second) {
    real_number = second.real_number;
    imaginary_unit = second.imaginary_unit;
    return ComplexNumbers(real_number, imaginary_unit);
}

ComplexNumbers::~ComplexNumbers() {}

int main(void) {
    ComplexNumbers value_1(1, 2), value_2(3, 4), value_3(5, 6), value_4(7, 8);

    setlocale(LC_ALL, "ru");
    cout << "Сумма:" << endl;
    (value_1 + value_2).To_Withdraw();

    cout << "\nРазность:" << endl;
    (value_1 - value_2).To_Withdraw();

    cout << "\nУмножение:" << endl;
    (value_1 * value_2).To_Withdraw();

    cout << "\nДеление:" << endl;
    (value_1 / value_2).To_Withdraw();

    cout << "\nБазовое значение:" << endl;
    value_3.To_Withdraw();

    cout << "\nПрисвоение:" << endl;
    (value_3 = value_4).To_Withdraw();

    return 0;
}