#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;
int main() {
    _setmode(_fileno(stdin),_O_U16TEXT);
    _setmode(_fileno(stdout),_O_U16TEXT);
int a;
wcin >> a;
if (a > 0) {
    wcout << L"Kim Ánh yêu Nam Trung ";
} else if (a < 0) {
    wcout << L"Kim Ánh không yêu Nam Trung";
} else {
    wcout << L"Kim Ánh xinh gái nhất thế giới";
}
    return 0;
}