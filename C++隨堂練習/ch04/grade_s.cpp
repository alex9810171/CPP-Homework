#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "�п�J���Z(0-100)�G"; 
    cin >> score;
    if (score>=90)
       cout << "�u��\n";
    else if (score>=80)
       cout << "�ҵ�\n";
    else if (score>=70)
       cout << "�A��\n";
    else if (score>=60)
       cout << "����\n";
    else  
       cout << "�B��\n";
    system("pause");
    return 0;
}
