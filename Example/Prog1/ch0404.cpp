#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
	int a=10,b=5,c=22,max;
	cout<<"Input a:";
	cin>>a;
	cout<<"Input b:";
	cin>>b;
	cout<<"Input c:";
	cin>>c;
	if(a>b)
	{
	   if(a>c)	/*�P�_a�O�_�j�� c*/
	     max=a;
	   else
	     max=c;
	}
	else
	{
		if(b>c)
		  max=b; /*�P�_ b �O�_�j�� c*/
		else
		  max=c;
	}
	//���V��ܵ��c 
	if(a==b && a==c)
	{
		printf("a,b,c�T�Ƭ۵�\n"); 
	}
	else
	{
		printf("\n������G:%3d %3d %3d �T�Ƥ��̤j�O:%3d\n", a,b,c,max);
	}
	
	system("pause");
	return 0;
}

