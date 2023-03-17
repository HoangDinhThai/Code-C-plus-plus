#include <iostream>
#include <string>
#include <math.h>

using namespace std;

/*
Bài 1: Viết chương trình nhập vào 1 số nguyên dương n.
Kiểm tra xem số n có phải là số nguyên tố hay không
*/
void input_integer(string label, int &n);
long long factor(int n);

int main()
{
    int n;

    input_integer("n = ", n);

    cout << n << "!= " << factor(n);
    return 0;
}

void input_integer(string label, int &n)
{
    cout << label;
    cin >> n;
}

long long factor(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factor(n - 1);
}