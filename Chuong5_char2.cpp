#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    Bài 1: Viết chương trình nhập vào 1 chuỗi gồm các ký tự từ a -> z và có thể chứa khoảng trắng.
    Hãy loại bỏ các khoảng trắng ở đầu và cuối chuỗi.
    */

    /*
      string str = "";
      cout << "Nhap chuoi: ";

      getline(cin, str);

      // Xóa khoảng trắng ở đầu chuỗi
      while (str[0] == ' ')
      {
          str.erase(0, 1);
      }

      // Xóa khoảng trắng ở cuối chuỗi
      while (str[str.length() - 1] == ' ')
      {
          str.erase(str.length() - 1, 1);
      }

      cout << "Ket qua: " << str;
    */

    /*
    Bài 2: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z và có thể chứa khoảng trắng.
    Hãy loại bỏ các khoảng trắng thừa ở giữa các từ.
    */

    /*
    string str = "";

    cout << "Nhap chuoi: ";
    getline(cin, str);

    int i = 0;
    while (i < str.length())
    {
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            str.erase(i, 1);
        }
        else
        {
            i++;
        }
    }
    cout << "Ket qua: " << str;
    */

    /*
     Bài 3: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chứa khoảng trắng.
     Hãy viết hoa các chữ cái ở đầu mỗi từ, các chữ cái còn lại để ở dạng viết thường.
    */

    /*
     string str = "";
     cout << "Nhap chuoi: ";
     getline(cin, str);

     // Chuyển các ký tự thành chữ thường
     for (int i = 0; i < str.length(); i++)
     {
         // Sử dụng hàm tolower() để chuyển chữ hoa thành chữ thường.
         str[i] = tolower(str[i]);
     }

     // Chuyển các kí tự đầu tiên thành chữ hoa
     if (str[0] != ' ')
     {
         str[0] = toupper(str[0]);
     }

     for (int i = 0; i < str.length(); i++)
     {
         if (str[i] == ' ' && str[i + 1] != ' ')
         {
             // Sử dụng toupper để chuyển chữ thường thành chữ hoa.
             str[i + 1] = toupper(str[i + 1]);
         }
     }

     cout << "Ket qua: " << str;
    */

    /*
    Bài 4: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chưa khoảng trắng.
    Hãy chuẩn hóa chuỗi đó.
    */

    string str = "";

    cout << "Nhap chuoi: ";
    getline(cin, str);

    // Loại bỏ khoảng trắng ở đầu
    while (str[0] == ' ')
    {
        str.erase(0, 1);
    }

    // Loại bỏ khoảng trắng ở cuối

    while (str[str.length() - 1] == ' ')
    {
        str.erase(str[str.length() - 1]);
    }

    // Loại bỏ khoảng trắng giữa các từ
    int i = 0;
    while (i < str.length())
    {
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            str.erase(i, 1);
        }

        else
        {
            i++;
        }
    }

    // Viết thường toàn bộ các chữ cái

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }

    // Viết hoa các chữ cái đầu
    str[0] = toupper(str[0]);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            str[i + 1] = toupper(str[i + 1]);
        }
    }

    cout << "Ket qua: " << str;
    return 0;
}
