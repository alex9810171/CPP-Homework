#include <iostream>
using namespace std;
int main()
{
    int n, c=0, s=0; //n�x�s�ʦҮy���Ac���p�ƾ��As�x�s���� 
    double sum=0, ave; //sum�x�s�`���Aave�x�s���� 
    cout << "�п�J�ʦҾǥͪ��y���G";
    cin >> n; //���ݨϥΪ̿�J�y�� 
    while(s>=0) //��J���Z�j�󵥩�0�N����j�餺�ԭz 
    {
        c++;
        if(c==n) //�p�G�ʸ��N���L
        {
            continue; 
        } 
        cout << "�п�J " << c << " �������Z�G";
        cin >> s; //���ݨϥΪ̿�J���� 
        if(s>=0) //��J���Z�j�󵥩�0�~�[�J�`�� 
        {
            sum += s;
        } 
    }
    ave = sum/(c-2); //�p�⥭���A�ǥͤH�Ƭ�(c-2)
    cout << "���Z�`���Z���G " << sum << " ��, ������ " << ave << " ��\n";
    system("pause");
    return 0;
}
