#include <iostream>

using namespace std;

int main()
{
    /*
    Bài 1: Viết chương trình nhập vào 2 số nguyên dương n và m (0 < n <= 10, 0 < m <= 10).
    Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột.
    Tính và in ra màn hình tổng các phần tử có trong mảng.
    */

    /*
     int n, m, arr[10][10];

    cout << "n = ";
    cin >> n;

    cout << "m = ";
    cin >> m;

    cout << "Nhap mang: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }

    cout << "Tong cac phan tu trong mang la: " << sum;
    */

    /*Bài 2: Viết chương trình nhập vào số nguyên dương n (0 < n <= 10).
    Tạo mảng 1 chiều có n phần tử là số nguyên và in ra màn hình phần tử có giá trị lớn nhất.*/

    /*
    int n, arr[10];

    cout << "n = ";
    cin >> n;

    cout << "Nhap mang: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Gia tri lon nhat la: " << max;
    */

    /*
    Bài 3: Viết chương trình nhập vào 2 số nguyên dương n và m (0 < n <= 10, 0 < m <= 10).
    Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột.
    In ra màn hình các phần tử lớn nhất của các hàng.
    */

    /*
    int n, m, arr[10][10];

    cout << "n = ";
    cin >> n;

    cout << "m = ";
    cin >> m;

    cout << "Nhap mang: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Cac phan tu lon nhat la: ";
    for (int i = 0; i < n; i++)
    {
        int max = arr[i][0];
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
        cout << max << " ";
    }
    */

    /*
    Bài 4: Viết chương trình nhập vào 2 số nguyên dương n và m (2 <= n <= 10, 2 <= m <= 10).
    Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột.
    Tính tổng các giá trị biên của mảng vừa tạo.
    */

    /*
     int n, m, arr[10][10];

    cout << "n = ";
    cin >> n;

    cout << "m = ";
    cin >> m;

    cout << "Nhap mang: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
            {
                sum += arr[i][j];
            }
        }
    }

    cout << "Tong cac gia tri bien la: " << sum;
    */
    return 0;
}
