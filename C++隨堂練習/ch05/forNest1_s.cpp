#include <iostream>
using namespace std;
int main()
{
    int n; //�x�s��J�Ʀr 
    double sum, ave; //sum�x�s�`���Aave�x�s���� 
    for(int i=1; i<=2 ;i++) //�~���j��N��Z�� 
    { 
        cout << "�� " << i << " �ӯZ�šG\n"; 
        sum = 0; //�s���Z�űN�`���k�s 
        for(int j=1; j<=4 ;j++) //�����j��N��ǥ�
        {
            cout << "�п�J�� " << j << " ��ǥͪ����Z�G";
            cin >> n; //���ݨϥΪ̿�J 
            sum += n; //�p���`�� 
        }
        ave = sum/4; //�p�⥭�� 
        cout << "��" << i << "�Z�`���Z���G " << sum << "��, ������ " << ave << "��\n\n";
    }
    system("pause");
    return 0;
}
