#include <iostream>
#include <string>

/*
Bài 3: Tạo mảng động có n phần tử nguyên (tối đa 10 phần tử).
Nhập vào 1 số nguyên dương x (0 <= x <= 9) và số nguyên y.
Thêm y vào vị trí x của mảng.
*/

using namespace std;

void input_integer(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void update(int *&arr, int &size, int updated_index, int new_element);

int main()
{
    int n, x, y;

    input_integer("n = ", n);

    int *numbers = new int[n];
    cout << "Nhap mang: ";

    input_array(numbers, n);

    input_integer("y = ", y);
    input_integer("x = ", x);

    update(numbers, n, x, y);
    cout << "Mang sau khi them: ";

    print_array(numbers, n);

    return 0;
}

void input_integer(string label, int &n)
{
    cout << label;
    cin >> n;
}

void input_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void update(int *&arr, int &size, int updated_index, int new_element)
{
    // Tạo 1 mảng mới.
    int new_size = size + 1;
    int *tmp_arr = new int[new_size];

    // Copy toàn bộ phần tử cũ sang mảng mới.
    for (int i = 0; i < size; i++)
    {
        tmp_arr[i] = arr[i];
    }

    // Thêm phần từ mới vào mảng mới.
    for (int i = new_size - 1; i > updated_index; i--)
    {
        tmp_arr[i] = tmp_arr[i - 1];
    }

    tmp_arr[updated_index] = new_element;

    // Gán mảng mới cho con trỏ cũ và tăng size lên 1 đơn vị.
    delete[] arr;
    arr = tmp_arr;
    size = new_size;
}
