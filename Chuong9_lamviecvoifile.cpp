#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fs;
    fs.open("test.txt", ios::in);

    return 0;
}