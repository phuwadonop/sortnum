#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
    int num[10];
    for (int i = 0; i < 10; i++)
        cin >> num[i];
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (num[i] > num[j]) {
                int b = num[i];
                num[i] = num[j];
                num[j] = b;
            }
        }
    }
    for (int i = 0; i < 10; i++)
        cout << num[i] << " ";
}