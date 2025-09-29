// Lab_02.cpp 
// < Тороній Анастасія Віталіївна > 
// Лабораторна робота № 2. 
// Лінійні програми. 
// Варіант 25
#include <iostream> 
#include <cmath> 
using namespace std;

int main()
{
    double a; // вхідний параметр
    //double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу
    cout << "a = "; cin >> a;
       
    z1 = 1 - 1./4. * (sin(2*a) * sin(2*a)) + cos(2*a);
    z2 = pow(cos(a), 2) + pow(cos(a), 4);
        
       cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}