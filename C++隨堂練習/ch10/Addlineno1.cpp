#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    fstream file;  	// �إ��ɮ׿�X�B��J����	
    char filename[20];
    char buffer[80];
    int n=1;
    cout << "�п�J�ɦW�G";
    cin >> filename; 
    file.open(filename, ios::in); //�}���ɮ�
    if(!file) //�ˬd�ɮ׬O�_���\�}��
         cout << "�ɮ׵L�k�}��!\n";
    else
    {
        do 
        {
            file.getline(buffer,sizeof(buffer)); // �C��Ū���@�� 
            cout << n << ": " << buffer << endl;  
            n++;
        } while(!file.eof());        // �O�_���ɮ׵��� 
        file.close();   //�����ɮ�
    }
    system("pause");
    return 0;
} 
