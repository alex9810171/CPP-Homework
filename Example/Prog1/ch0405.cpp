#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
	int season;
	string name;
	printf("�п�J�ĴX�u(1��4):");
	cin>>season;
	switch(season)
	{
		case 1:
			name="�K��";
			break;
		case 2:
			name="�L��";
			break;
		case 3:
			name="���";
			break;
		case 4:
			name="�V��";
			break;
		default :
			cout<<"error\n";
	}
	if(season>=1 && season<=4)
	{
		cout<<"�{�b�O"<<name<<endl;
	}
	system("pause"); 
	return 0;
}	 
