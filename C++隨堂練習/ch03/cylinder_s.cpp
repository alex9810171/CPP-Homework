#include <iostream>
using namespace std;
int main()
{
    float radium, height, volumn;
    const float pi = 3.14; 
    cout << "�п�J��W�骺�b�|(����)�G";
    cin >> radium; 
    cout << "�п�J��W�骺��(����)�G";
    cin >> height; 
    volumn = pi * radium * radium * height; 
    cout << "��W�骺��n�G" << volumn << " �ߤ褽��\n";
    system("pause");
    return 0;
}
