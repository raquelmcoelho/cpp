
class Complex
{
private:
    double _re;
    double _im;

public:
    Complex();
    Complex(double re, double im);
    Complex(const Complex &obj);
    Complex &operator=(const Complex &obj);
    Complex &operator+(const Complex &obj);
    Complex &operator*(const Complex &obj);
    Complex &operator-(const Complex &obj);

    double getReal() const;
    double getImaginary() const;
    double getModule();
    double getArgument();
    void print();
    void switchRealAndImaginary();
};

Complex product(Complex c1, Complex c2) const;
Complex sum(Complex c1, Complex c2) const;
Complex difference(Complex c1, Complex c2) const;