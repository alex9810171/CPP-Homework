#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;	// �إ��ɮ׿�X����	
	char no[6],name[8];
	char yn;
	//�إ�sample01.txt�ɮסA�����ƪ��[�ʧ@
	file.open("sample01.txt", ios::app);
	//�P�_�ɮ׬O�_��}�ҡ��}�Ҧ��\�~�g�J���
	if(file.fail()){
       cout << "�ɮ׵L�k�}��!\n";
  	}
	else
	{
    	do 
        { 
            cout << "�п�J�s���B�~�W\n";
            cin >> no >> name;           
    	    file << no << "\t" << name << "\n"; // �g�J���
            cout << "�O�_�~��(Y/N)";
            cin >> yn;
        } while (yn=='Y' || yn=='y');  
        cout << "�ɮ׫إߧ���!\n";        
    	file.close(); 	//�����ɮ�
    }
	system("pause");
	return 0;
}
