//�N��ƿ�X���ɮ� 
#include <iostream>
#include <fstream>
#include <stdlib.h> //�ϥ�exit�����Jstdlib���Y��
using namespace std;
int main() //�D�{���}�l
{
    fstream file;
    char buffer[200];
    
    char *str[4] = {"Mary","John","Judy","Joe"}; //�ŧi�r����а}�C
    int id[4] = {100,200,300,400};
    file.open("Reader.txt", ios::out); //�}���ɮ�
    if(!file) //�ˬd�ɮ׬O�_���\�}��
    {
       cerr << "Can't open file!\n";
       return 0; //�b�����`���ΤU�A���_�{��������
    }
    for(int i = 0; i < 4; i++)
    {
       file << id[i] << " " << str[i] << "\n";
    } //�N��ƿ�X���ɮ�
    file.close();
    
    file.open("Reader.txt",ios::in);
    file.read(buffer,200);
    cout << buffer << endl;
    
    system("pause");
    return 0;
} //�D�{������ 

