#include <iostream>
using namespace std;
int main()
{
    short day1, day2, day3;  //�ŧi�ܼ� 
    cout << "�п�J�Ĥ@�Ѫ���X�G";  
    cin >> day1;
    cout << "�п�J�ĤG�Ѫ���X�G"; 
    cin >> day2;
    cout << "�п�J�ĤT�Ѫ���X�G"; 
    cin >> day3;
    int sum = day1 + day2 + day3;  //�p���`��X 
    float ave = (float)sum / 3;  //�p�⥭�� 
    cout << "�z���`��X�� " << sum << " ���A�����C�Ѥ�X " << ave << " ��\n";
    system("pause");
    return 0;
}
