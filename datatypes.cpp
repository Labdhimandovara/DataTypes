#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int d;
    cout << "Enter the value of int d: ";
    cin >> d;
    cout << "D = " << d << endl;

    float c;
    cout << "Enter the value of float c: ";
    cin >> c;
    cout << "C = " << c << endl;

    char z;
    cout << "Enter the character z: ";
    cin >> z;
    cout << "Z = " << z << endl;

    string g;
    cout << "Enter your name: ";
    cin >> g;
    cout << "Name: " << g << endl;

    cout << "Size of name: " << sizeof(g) << endl;
    return 0;
}

/*Enter the value of int d: 456
D = 456
Enter the vlue of float c: 76.5
C = 76.5
Enter the character z: a
Z = a
Enter your name: labdhi
Name: labdhi
Size of name: 24*/