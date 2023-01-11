#include <iostream>
using namespace std;

int main()
{
    std::cout << "Laba5\n";
    int length = 1;
    cout << "Enter the length of the array: \n";
    cin >> length;

    int* myArr = new int[length] {0};
    int* num1 = &myArr[(length - 1) / 2];
    *num1 = 5;
    int* num2 = &myArr[length - 1];
    *num2 = 45;
    int* num3 = &myArr[0];
    *num3 = 100;

    for (int i = 0; i < length; i++)
        cout << "\n" << myArr[i] << " ";
}