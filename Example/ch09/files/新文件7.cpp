#include <iostream>
#include <fstream>
using namespace std;

int main() //主程式開始
{
    char c[10]="123";
    char *p;
    char *s="abc";
    p=c;
    cout << "p=" << p;
    p=s;
    cout << "p=" << p;
        system("pause");
    return 0;
} //主程式結束 
