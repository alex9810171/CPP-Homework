#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    fstream file;  	// �إ��ɮ׿�X����	
    char buffer;
    file.open("sample.txt", ios::in); //�}���ɮ�
    if(!file) //�ˬd�ɮ׬O�_���\�}��
       cout << "�ɮ׵L�k�}��!\n";
    else
    {
        while(file.get(buffer)) // �r���v�@Ū�� 
        {
            cout << buffer;  
        } 
        cout << endl;  
        file.close();   //�����ɮ�
    }
    system("pause");
    return 0;
} 
