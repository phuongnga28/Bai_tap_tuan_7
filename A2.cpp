#include <iostream>
using namespace std;
void check(int f[])
{
    for (int i = 0;i < 10;i++) cout << &f[i];
}
int main()
{
    int A[100];
    for (int i = 0;i < 10;i++) cout << &A[i];
    cout << endl;
    check(A);
    return 0;
}
