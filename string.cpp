#include <iostream>
#include <cstring>
using namespace std;
string concnicate(string str)
{
    char c[100];
    cout << "enter achar\n";
    cin >> c;
    str = str + c;
    return str;
}
bool comp(string str)
{
    string c;
    cout << "enter your string \n";
    cin >> c;
    return str.compare(c);
};
string remove(string str)
{

    return str.substr(0, str.size() - 1);
}
int main()
{
    string str;
    cout << "enter a string ";
    cin >> str;
    int cho;
    cout << "\n 1. concanicate \n 2. comapare \n 3. remove char \n 4.lenght \n 5. exitt\n";
    cout << "enter your choice\n";
    cin >> cho;
    switch (cho)
    {
    case 1:
        cout << concnicate(str) << endl;
        break;
    case 2:
        cout << "your string are  " << (!comp(str)) << endl;
        break;
    case 3:
        cout << "string before remval is :" << str << endl;
        cout << "string after removal is :" << remove(str) << endl;
        break;
    case 4:
        cout << "lenght of string is " << str.size() << endl;
        break;
    case 5:
        exit(0);
        break;
    default:
        cout << "enter valid choice \n";
    }
    return 0;
}