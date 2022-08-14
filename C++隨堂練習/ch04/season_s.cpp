#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "請輸入現在是第幾季(1-4):";
    cin >>n;
    switch (n)
    {
    case 1:
        cout << "現在是春天！\n";
        break;
    case 2:
        cout << "現在是夏天！\n";
        break;
    case 3:
        cout << "現在是秋天！\n";
        break;
    case 4:
        cout << "現在是冬天！\n";
        break;
    default:
        cout << "輸入的數字不正確！\n";
        break;
    }
    system("pause");
    return 0;
}
