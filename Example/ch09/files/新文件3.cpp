#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;	// �إ��ɮ׿�X����	
	//�إ�sample01.txt�ɮסA����g�J�ʧ@
	file.open("sample01.txt", ios::out);
	//�P�_�ɮ׬O�_��}�ҡ��}�Ҧ��\�~�|�g�J���
	if(file.fail()){
       cout << "�ɮ׵L�k�}��!\n";
       system("pause");
       return 0; //���_�{��������
	}
	    file << "�s��\t�W��\n";
    file << "A01\t���N�h\n";  

    cout << "�ɮ׫إߦ��\\n";   
	
//	else{
//		file << "�m�W  \t����\n";			//�g�J���
//		file << "���j�P\t253\n";		//�g�J���
//		cout<< "�ɮ׫إߦ��\....\n";
//	}
	file.close();							//(4)�����ɮ�
	system("pause");
    //return 0;
	return 0;
}
