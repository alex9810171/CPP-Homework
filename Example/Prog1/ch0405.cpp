#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
	int season;
	string name;
	printf("請輸入第幾季(1～4):");
	cin>>season;
	switch(season)
	{
		case 1:
			name="春天";
			break;
		case 2:
			name="夏天";
			break;
		case 3:
			name="秋天";
			break;
		case 4:
			name="冬天";
			break;
		default :
			cout<<"error\n";
	}
	if(season>=1 && season<=4)
	{
		cout<<"現在是"<<name<<endl;
	}
	system("pause"); 
	return 0;
}	 
