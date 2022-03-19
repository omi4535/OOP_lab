#include <iostream>
using namespace std;
class complex_number
{
public:
    int real, img;

    complex_number add(complex_number a, complex_number b)
    {
        complex_number res;
        res.real = a.real + b.real;
        res.img = a.img + b.img;
        return res;
    }
};
int main()
{
    complex_number a, b, res;
    cout << "enter real part of 1st no :";
    cin >> a.real;
    cout << "enter img part of 1st no :";
    cin >> a.img;
    cout << "enter real part of 2nd no :";
    cin >> b.real;
    cout << "enter img part of 2nd no :";
    cin >> b.img;
    res = res.add(a, b);
    cout << "\n--------------------------------------------------\n\n";
    cout << " ( " << a.real << " + " << a.img << " i ) + "
         << "( " << b.real << " + " << b.img << " i ) = ( " << res.real << " + " << res.img << "i )" << endl;

    return 0;
}