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
	   if(a>c)	/*判斷a是否大於 c*/
	     max=a;
	   else
	     max=c;
	}
	else
	{
		if(b>c)
		  max=b; /*判斷 b 是否大於 c*/
		else
		  max=c;
	}
	//雙向選擇結構 
	if(a==b && a==c)
	{
		printf("a,b,c三數相等\n"); 
	}
	else
	{
		printf("\n比較結果:%3d %3d %3d 三數中最大是:%3d\n", a,b,c,max);
	}
	
	system("pause");
	return 0;
}

