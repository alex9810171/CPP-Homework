#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "�п�J�{�b�O�ĴX�u(1-4):";
    cin >>n;
    switch (n)
    {
    case 1:
        cout << "�{�b�O�K�ѡI\n";
        break;
    case 2:
        cout << "�{�b�O�L�ѡI\n";
        break;
    case 3:
        cout << "�{�b�O��ѡI\n";
        break;
    case 4:
        cout << "�{�b�O�V�ѡI\n";
        break;
    default:
        cout << "��J���Ʀr�����T�I\n";
        break;
    }
    system("pause");
    return 0;
}
