#include <iostream>
using namespace std;
int main()
{
    int n, c=0; //n�x�s��J�Ʀr�Ac���p�ƾ� 
    double sum=0, ave; //sum�x�s�`���Aave�x�s���� 
    do //�إ� do�Kwhile �j�� 
    {
        c++;
        cout << "�п�J�� " << c << " ��ǥͪ����Z�G";
        cin >> n; //���ݨϥΪ̿�J
        if(n>=0) //��J���Z�j�󵥩�0�~�[�J�`��
        { 
            sum += n;  
        }
    }while(n>=0); //��J���Z�j�󵥩�0�N���^��j��ҩl
    ave = sum/(c-1); //�p�⥭�� �A�ǥͤH�Ƭ�(c-1) 
    cout << "���Z�`���Z���G " << sum << " ��, ������ " << ave << " ��\n";
    system("pause");
    return 0;
}
