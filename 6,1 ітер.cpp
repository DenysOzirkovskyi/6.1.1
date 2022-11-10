// 6,1 ітер.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int Number(int* c, const int size) {
    int n = 0;
    for (int i = 0; i <= size; i++) {
        if (c[i] % 2!= 0 || c[i] > 0)
            n++;

    }
    return n;
}
void Create(int* c, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        c[i] = Low + rand() % (High - Low + 1);
}
void Print(int* c, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << c[i];
    cout << endl;
}

int Sum(int* c, const int size) {
    int s = 0;
    for (int i = 0; i <= size; i++) {
        if (c[i] % 2 != 0 || c[i] > 0)
            s += c[i];
    }
    return s;

}

void Change(int*c, const int size) {
    for (int i = 0; i < size; i++) {
        if (c[i] % 2 == 0 && c[i] < 0)
            c[i] = 0;
    }
}

int main()
{
    srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
    const int n = 27;
    int c[n];
    int Low = -35;
    int High = 25;
    Create(c, n, Low, High);
    Print(c, n);
    int number = Number(c, n);
    cout <<endl<< "Numbers: " << endl;
    cout << number;
    int sum = Sum(c, n);
    cout << "\nSum: " << endl;
    cout << sum;
    cout << endl;
    Change(c, n);
    Print(c, n);


    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
