//Ū���G�i���ɮ׸��
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;	//�إ��ɮ׿�J����	
    char buffer[300];
	//Ū���G�i���ɮ�sample02.dat
	//file.open("sample02.dat", ios::in|ios::binary);
	file.open("sample.txt", ios::in|ios::binary);
	if(file.fail())
		cout<<"�ɮ׵L�k�}��...\n";
	else
    {
		while(!file.eof()) //�P�_�O�_���ɮ׵���
        {   
			//Ū�����
			file.read((char*) &buffer, sizeof(buffer));
			cout << buffer;
		}
	}	
    cout << endl;  	
	file.close();	//�����ɮ�
	system("pause");
    return 0;
}
