#include <iostream>
using namespace std;

int main()
{
    // Bài 1: Tạo mảng số nguyên dương có n phần tử. Nhập vào 1 số nguyên dương x và thêm x vào cuối mảng đã tạo.
    /*
    int numbers[20];
    int n, x;

    cout << "n = ";
    cin >> n;

    // Nhập mảng
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << "x = ";
    cin >> x;

    numbers[n] = x;
    n++;

    cout << "Mang sau khi them la: ";
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }
    */

    // Bài 2: Tạo mảng số nguyên dương có n phần tử. Nhập vào 1 số nguyên dương x và xóa phần tử ở vị trí x.
    /*
     int numbers[20];
     int n, x;

     cout << "n = ";
     cin >> n;

     cout << "Nhap mang: ";
     for (int i = 0; i < n; i++)
     {
         cin >> numbers[i];
     }

     cout << "x = ";
     cin >> x;

     for (int i = x; i < n - 1; i++)
     {
         numbers[i] = numbers[i + 1];
     }
     n--;

     cout << "Mang sau khi xoa la: ";
     for (int i = 0; i < n; i++)
     {
         cout << numbers[i] << " ";
     }
    */

    // Bài 3: Tạo mảng số nguyên dương có n phần tử. Nhập vào 1 số nguyên dương và số nguyên dương y. Thêm y vào vị trí x.

    /*
    int numbers[20];
    int n, x, y;

    cout << "n = ";
    cin >> n;

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    for (int i = n; i > x; i--)
    {
        numbers[i] = numbers[i - 1];
    }

    numbers[x] = y;
    n++;

    cout << "Mang sau khi them la: ";
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }

    */
    return 0;
}
