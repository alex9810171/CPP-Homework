#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
	int sum=0;
	int num;
	printf ("�п�J���榸��");
	cin>>num;
	for (int i=1; i<=num;i++)
	{
	    sum+=i;
		printf("Hello...%2d�[�`=%3d\n",i,sum);
	}
	system("pause"); 
	return 0;
}
