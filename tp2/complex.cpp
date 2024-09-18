#include "complex.h"
#include <cmath>
#include <iostream>

using namespace std;

Complex::Complex()
{
}

Complex::Complex(double re, double im)
{
    _re = re;
    _im = im;
}

Complex &Complex::operator=(const Complex &obj)
{
    _re = obj.getReal();
    _im = obj.getImaginary();
    return *this;
}
Complex &Complex::operator+(const Complex &obj)
{
    return sum(this, obj);
}
Complex &Complex::operator-(const Complex &obj)
{
    _re -= obj.getReal();
    _im -= obj.getImaginary();
    return *this;
}
Complex &Complex::operator*(const Complex &obj)
{
    double real = (c1.getReal() * c2.getReal()) - (c1.getImaginary() * c2.getImaginary());
    double imaginary = (c1.getReal() * c2.getImaginary()) + (c1.getImaginary() * c2.getReal());
    _re = (obj.getReal() * _re);
    _im = obj.getImaginary();
    return *this;
}

Complex::Complex(const Complex &obj)
{
    _re = obj.getReal();
    _im = obj.getImaginary();
}

double Complex::getReal() const
{
    return _re;
}

double Complex::getImaginary() const
{
    return _im;
}

double Complex::getModule()
{
    double z = sqrt(pow(_re, 2) + pow(_im, 2));
    return z < 0 ? -z : z;
}

double Complex::getArgument()
{
    double arg = atan(_im / _re);
    return arg;
}

void Complex::print()
{
    cout << _re << " + i." << _im << endl;
}

void Complex::switchRealAndImaginary()
{
    swap(_re, _im);
}

Complex product(Complex c1, Complex c2)
{
    double real = (c1.getReal() * c2.getReal()) - (c1.getImaginary() * c2.getImaginary());
    double imaginary = (c1.getReal() * c2.getImaginary()) + (c1.getImaginary() * c2.getReal());
    Complex c3(real, imaginary);
    return c3;
}

Complex sum(Complex c1, Complex c2)
{
    Complex c3(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
    return c3;
}

Complex difference(Complex c1, Complex c2)
{
    Complex c3(c1.getReal() - c2.getReal(), c1.getImaginary() - c2.getImaginary());
    return c3;
}