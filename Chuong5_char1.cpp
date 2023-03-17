#include <iostream>
#include <string>

using namespace std;

int main()
{
  /*
  Phương thức str.substr(x, y): lấy ra 1 chuỗi con và có độ dài là y ký tự bất đầu từ x.
  Nếu như chỉ truyền đối số là x thì sẽ cắt từ x đến hết chuỗi
  */

  /*
  string str = "01234";
  string str1 = str.substr(2, 3);
  cout << str1;
  */

  /*
  Phương thức str.find(s): truyền vào 1 chuỗi và tìm kiếm chuỗi đó có xuất hiện trong chuỗi str hay không.
  Nếu có sẽ trả về vị trí của chuỗi đó.
  */

  /*
    string str = "abc";
    cout << str.find("bc");
  */

  /*
  Phương thức str.erase(x, n): xóa đi n kí tự bắt đầu từ vị trí x
  */

  /*
  string str = "abcd";
  str.erase(2, 2);
  cout << str;
  */

  /*
  Phương thức str.replace(x, n, s)
  Thay thế n phần tử tại vị trí x bằng chuỗi s.
  */

  /*
  string str = "abcd";
  str.replace(1, 2, "***");
  cout << str;
  */

  /*
  Phương thức str.compare(s): so sánh chuỗi srt vs s
  - Nếu str = s ==> 0
  - Nếu str > s ==> 1
  - Nếu str < s ==> -1
  */

  /*
  string str1 = "abcd";
  string str2 = "abcd";
  cout << str1.compare(str2);
  */

  /*
  Phương thức str.insert(x, s): chèn lấy 1 chuỗi s chèn vào vị trí x
  */

  /*
  string str = "abcd";
  str.insert(1, "**");
  cout << str;
  */

  /*
  Phương thức str.length() & str.size(): đếm tổng số lượng byte của cả chuỗi mỗi kí tự có 1 byte, ...

  */

  /*
    string str = "abcd";
    cout << str.length();
    cout << str.size();
  */
  return 0;
}
