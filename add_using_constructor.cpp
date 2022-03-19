#include <iostream>
using namespace std;
class addition_using_construcntor
{
public:
    int a, b;
    addition_using_construcntor()
    {
        cout << "enter 1st no :";
        cin >> a;
        cout << "enter 2nd no :";
        cin >> b;
    }
    int add1()
    {
        return a + b;
    }
};
int main()
{
    addition_using_construcntor addition;
    cout << "addition of a and b is " << addition.add1() << endl;
    cout << addition.a << " + " << addition.b << " = " << addition.add1() << endl;
    return 0;
}