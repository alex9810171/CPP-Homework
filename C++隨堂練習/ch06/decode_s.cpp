#include <iostream>
using namespace std;
int main()
{
    char password[20];
    cout << "�п�J�[�K�᪺�K�X�G"; 
    gets(password);  //���o��J�r�� 
    cout << "�ѱK�᪺�K�X�G";
    for(int i=0;i<strlen(password);i++)  //�v�@�B�z�r�� 
    {
        password[i]--;  //�N�r���X��1�A�YB�ܬ�A�BC�ܬ�B�B�̦����� 
        cout << password[i];
    }
    cout << "\n";
    system("pause");
    return 0;
}
