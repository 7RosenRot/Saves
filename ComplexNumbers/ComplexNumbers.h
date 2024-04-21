#pragma once
#include <iostream>
using namespace std;

class ComplexNumbers {
    public:
        ComplexNumbers(float first, float second);
        ~ComplexNumbers();

        void To_Withdraw() const;

        ComplexNumbers operator+(const ComplexNumbers &second) const;
        ComplexNumbers operator-(const ComplexNumbers &second) const;
        ComplexNumbers operator*(const ComplexNumbers &second) const;
        ComplexNumbers operator/(const ComplexNumbers &second) const;
        ComplexNumbers operator=(const ComplexNumbers &second);
    
    protected:
        float real_number;
        float imaginary_unit;
};