#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
	long sum=1;
	int num;
	printf ("請輸入執行次數");
	cin>>num;
	for (int i=1; i<=num;i++)
	{
	    sum*=i;
		printf("Hello...%2d階乘=%3d\n",i,sum);
	}
	printf("%d Byte\n",sizeof(long));
	printf("%d Byte\n",sizeof(num));
	system("pause"); 
	return 0;
}
