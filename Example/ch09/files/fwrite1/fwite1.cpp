#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;	// �إ��ɮ׿�X����	
	//�إ�sample01.txt�ɮסA����g�J�ʧ@
	file.open("sample01.txt", ios::out);
	//�P�_�ɮ׬O�_��}�ҡ��}�Ҧ��\�~�g�J���
	if(file.fail()){
       cout << "�ɮ׵L�k�}��!\n";
 	}
	else
	{
    	file << "�s��\t�~�W\n";
        file << "A01\t���N�h\n";  
        file << "B01\t�ʭ��G\n";
        cout << "�ɮ׫إߧ���!\n";
    	file.close(); 	//�����ɮ�
    }
	system("pause");
	return 0;
}
