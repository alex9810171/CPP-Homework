#include <iostream>
using namespace std;
int main()
{
    int n; //�x�s��J�Ʀr 
    double sum=0, ave; //sum�x�s�`���Aave�x�s���� 
    for(int i=1; i<=5 ;i++) //���椭���j�� 
    {
        cout << "�п�J�� " << i << " ��ǥͪ����Z�G";
        cin >> n; //���ݨϥΪ̿�J 
        sum += n; //�p���`�� 
    }
    ave = sum/5; //�p�⥭�� 
    cout << "���Z�`���Z���G " << sum << "��, ������ " << ave << "��\n";
    system("pause");
    return 0;
}
