#include <iostream>
using namespace std;
int main()
{
    /*
    Bài 1: Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10).
    Nhập mảng có n số nguyên.
    Hãy sắp xếp lại mảng đó theo thứ tự giảm dần và in ra màn hình.
    */
    /*
    int n, arr[10];

    cout << "n = ";
    cin >> n;

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "Mang sau khi sap xep la: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    */

    /*
    Bài 2: Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10).
    Nhập mảng có n số nguyên và nhập số nguyên k.
    Hãy kiểm tra xem trong mảng có xuất hiện 2 phần tử có tổng bằng k hay không,
    nếu có hãy in ra màn hình vị trí của 2 phần tử đó (lấy 2 vị trí đầu tiên tìm được).
    */

    /*
     int n, k, arr[10];

     cout << "n = ";
     cin >> n;

     cout << "Nhap mang: ";
     for (int i = 0; i < n; i++)
     {
         cin >> arr[i];
     }

     cout << "k = ";
     cin >> k;

     int x = -1, y = -1;
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             if (i != j && (arr[i] + arr[j]) == k)
             {
                 x = i;
                 y = j;
                 break;
             }
         }

         if (x != -1 && y != -1)
         {
             break;
         }
     }

     if (x != -1 && y != -1)
     {
         cout << "Ket qua la: " << x << " " << y;
     }

     else
     {
         cout << "Khon co";
     }
    */

    /*
    Bài 3: Viết chương trình nhập vào 2 ma trận có n hàng và m cột (0 < n <= 10, 0 < m <= 10).
    In ra tổng của 2 ma trận.
    */

    /*
     int n, m, matrix1[10][10], matrix2[10][10];

     cout << "n = ";
     cin >> n;

     cout << "m = ";
     cin >> m;

     cout << "Nhap ma tran 1: " << endl;

     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < m; j++)
         {
             cin >> matrix1[i][j];
         }
     }

     cout << "Nhap ma tran 2: " << endl;

     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < m; j++)
         {
             cin >> matrix2[i][j];
         }
     }

     cout << "Tong 2 ma tran la: " << endl;

     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < m; j++)
         {
             cout << matrix1[i][j] + matrix2[i][j] << " ";
         }

         cout << endl;
     }
    */

    /*
    Bài 4: Viết chương trình nhập vào 1 ma trận có n hàng và m cột (0 < n <= 10, 0 < m <= 10).
    In ra màn hình tổng của các số lẻ xuất hiện trong ma trận.
    */

    /*
    int n, m, arr[10][10];

    cout << "n = ";
    cin >> n;

    cout << "m = ";
    cin >> m;

    cout << "Nhap vao ma tran: " << endl;

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
            if (arr[i][j] % 2 == 1)
            {
                sum += arr[i][j];
            }
        }
    }

    cout << "Tong cac phan tu le la: " << sum;
    */
    return 0;
}
