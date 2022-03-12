#include<iostream>
using namespace std;

int main ()
{
    int arrSize;
    cout << "Enter size of an array" << endl;
    cin >> arrSize;

    int *myArr = new int [arrSize];
    myArr[0] = 1;
    myArr[1] = 2;
    myArr[2] = 3;

    cout << myArr[0];
}