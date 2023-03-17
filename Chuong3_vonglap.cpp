#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Bài 1: Viết chương trình giải phương trình bậc nhất một ẩn ax + b = 0, trong đó a và b là các hệ số nhập từ bàn phím.
    /*
    float a, b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    if (a == 0 && b == 0)
    {
        cout << "Phuong trinh co vo so nghiem";
    }

    else if (a == 0 && b != 0)
    {
        cout << "Phuong trinh vo nghiem";
    }

    else if (a != 0)
    {
        cout << "Phuong trinh co nghiem duy nhat: " << -b / a << endl;
    }

    */

    // Bài 2: Viết chương trình nhập vào số nguyên dương n (n <= 100). Tính và hiển thị tổng các số tự nhiên lẻ từ 1 đến n.
    /*
    int n;
    cout << "n = ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
    }

    cout << "Ket qua la: " << sum << endl;

    */

    // Bài 3: Viết chương trình nhập nhiệt độ F từ bàn phím rồi tính và hiển thị nhiệt độ đó ở độ C

    /*
    float deg_f;

    cout << "F = ";
    cin >> deg_f;

    cout << "C = " << (deg_f - 32) / 1.8;
    */

    // Bài 4: Viết chương trình nhập vào một số n từ bàn phím. Hãy kiểm tra xem n có phải số nguyên tố hay không.
    /*
     int n;
    cout << "n = ";
    cin >> n;

    bool is_nt = true;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            is_nt = false;
            break;
        }
    }

    if (is_nt)
    {
        cout << "n la so nguyen to";
    }

    else
    {
        cout << "n khong phai la so nguyen to";
    }
    */

    // Bài 5: Viết chương trình nhập vào một số nguyên dương n từ bàn phím. Tính tổng các chữ số tạo nên số đó.

    /*
    int n;
    cout << "n = ";
    cin >> n;
    int sum = 0;

    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }

    cout << "Ket qua la: " << sum;
    */

    return 0;
}
