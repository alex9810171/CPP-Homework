#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    const int size=200; // �̦h�i��J 200 �Ӧr�� 
	fstream file;	// �إ��ɮ׿�X����	
	char buffer[size];   // �ŧi �r���}�C 
	//�إ�sample01.txt�ɮסA����g�J�ʧ@�ñN��ƪ��[�b�ɮ׵���
	file.open("sample01.txt", ios::out | ios::app); 
	//�P�_�ɮ׬O�_��}�ҡA�}�Ҧ��\�~�g�J���
	if(file.fail())
       cout << "�ɮ׵L�k�}��!\n";
	else
	{
        cout << "�п�J��ơG"; 
        // �ϥ� cin.getline(buffer,strlen(buffer),'\n') ��J�r�� 
        cin.getline(buffer,size,'\n');
        cout << buffer << endl; // ��ܦb�ù� 
        file.write(buffer,strlen(buffer)); //�N buffer �g�J�ɮ�
        cout << "�ɮ׫إߧ��� !\n";
    	file.close(); 	//�����ɮ�
    }
	system("pause");
	return 0;
}
