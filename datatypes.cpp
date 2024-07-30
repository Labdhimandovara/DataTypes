#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int d;
    cout<<"Enter the value of int d"<<endl;
    cin>>d;
    cout<<"D = "<<d<<endl;
    cout<<"Size of integer: "<<sizeof(d)<<endl;

    float c;
    cout<<"Enter the value of float c"<<endl;
    cin>>c;
    cout<<"D = "<<c<<endl;
    cout<<"Size of float: "<<sizeof(c)<<endl;

    char z;
    cout<<"Enter the character z"<<endl;
    cin>>z;
    cout<<"Z = "<<z<<endl;
    cout<<"Size of character: "<<sizeof(z)<<endl;

    string g;
    cout<<"Enter your name"<<endl;
    cin>>g;
    cout<<"Name: "<<g<<endl;

    cout<<"Size of name: "<<sizeof(g)<<endl;
}
//OUTPUT
/*Enter the value of int d: 456
D = 456
Size of integer:4
Enter the value of float c: 76.5
C = 76.5
Size of float:4
Enter the character z: a
Z = a
Size of character:1
Enter your name: labdhi
Name: labdhi
Size of name: 24*/
