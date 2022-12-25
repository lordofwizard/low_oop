/*Implement a class Complex which represents the Complex Number data type. Implement
the following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.4. Overloaded << and >> to
print and read Complex Numbers.
*/
#include <iostream>

class Cplx{
    public:
        int real;
        int imag;
        Cplx(){
            this->real = 0;
            this->imag = 0;
        }
        Cplx(int real, int imag){
            this->real = real;
            this->imag = imag;
        }
        Cplx operator+ (Cplx obj){
            Cplx temp;
            temp.real=real+obj.real;
            temp.imag=imag+obj.imag;
            return (temp);
        }
        Cplx operator* (Cplx obj){
            Cplx temp;
            temp.real=real*obj.real-imag*obj.imag;
            temp.imag=real*obj.imag+imag*obj.real;
            return temp;
        }
        friend std::istream &operator<<(std::istream &,Cplx&);
        friend std::ostream &operator>>(std::ostream &,Cplx&);
};
std::istream &operator >> (std::istream &is,Cplx &obj){
            is>>obj.real;
            is>>obj.imag;
            return is;
}
std::ostream &operator << (std::ostream &os, Cplx &obj){
    os<<" " << obj.real << " + " << obj.imag <<"i";
    return os;
}


int main(){
    Cplx a,b;
    std::cout << "Enter input for a" << std::endl;
    std::cin >> a;
    std::cout << "Enter input for b" << std::endl;
    std::cin >> b;

    std::cout << "Addition" << std::endl;
    Cplx add = a + b;
    std::cout << add << std::endl;
    
    std::cout << "Multiplication" << std::endl;
    Cplx mul = a * b;
    std::cout << mul << std::endl;
    return 0;
}
