//�g�J�G�i���ɮ׸��
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;	//�إ��ɮ׿�J����	
    char buffer[300];
    char yn;
    char no[6],name[8];
	//Ū���G�i���ɮ�sample02.dat
	// �ɮ׶}�Ҭ��g�J���A,�q�ɮ׵����g�J���
	//
	file.open("sample01.txt", ios::out|ios::binary|ios::app);
	if(file.fail())
		cout<<"�ɮ׵L�k�}��...\n";
	else
    {
		do
        { 
            cout << "�п�J�s���B�~�W\n";
            cin >> no >> name;    
            file.write((char*) &no, sizeof(no)); // �g�J���      
           // file.write((char*) "\t", 1); // �g�J���      
            file.write((char*) &name , sizeof(name)); // �g�J���    
          //  file.write((char*)  "\t\n", 2); // �g�J���     
            cout << "�O�_�~��(Y/N)";
            cin >> yn;
        } while (yn=='Y' || yn=='y');  
        cout << "�ɮ׫إߧ���!\n";        
    	file.close(); 	//�����ɮ�
	}	
    cout << endl;  	
	file.close();	//�����ɮ�
	system("pause");
    return 0;
}
