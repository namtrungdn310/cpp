#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;
int main() {
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    int a, b;
    wcin >> a >> b;
    int c = a;
    a = b;
    b = c;
    wcout << L"đổi a và b " << endl;
    wcout << L"a = " << a << endl;
    wcout << L"b = " << b;
    return 0;
}