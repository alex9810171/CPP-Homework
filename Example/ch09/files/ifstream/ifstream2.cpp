#include<iostream>
#include<fstream>
using namespace std;
#define size 30
int main()
{
	ifstream file;	  //(1)�إ��ɮת���	
	char buff;		  //(2)�s���ƪ��w�İ�

    file.open("sample.txt",ios::in); //(3)�}��sample.txt�ɮסAŪ�����
    if (file.fail())
       cout << "error...";
    else
    {
		while(file.get(buff))
        {	//(4)Ū�������
			cout<<buff;	//(5)��X�ɮפ��e
		}		
    }
    file.close();
    cout<<endl;	
    system("pause");
    return 0;
}
