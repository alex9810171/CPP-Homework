#include <iostream>
using namespace std;
int main()
{
     int num[]={67,12,9,52,91,3};
     int n=sizeof(num)/sizeof(num[0]); //陣列長度
     int s,i,j,min,max,mid;
     bool Isfound;
     for (i=0;i<n-1;i++)  // 陣列排序
     {
        for (j=i+1;j<n;j++)
        {
            if (num[i]>num[j])
            {
               int x=num[i];  // 交換編號 
               int y=num[j];
               num[i]=y;
               num[j]=x;
             }
        }
     }
   for(;;)
   {
     Isfound=false;
     min=0;
     max=n-1;
     cout << "請輸入查詢號碼：";
     cin >> s;
     while (min<=max)
     {
        mid=(min+max)/2;
        if ( num[mid]==s)  //號碼相符 
        {
           Isfound=true;
           break;
        }
        if (num[mid]>s)  //如果中間值大於輸入值 
           max=mid-1;    //使用較小的一半區域繼續比對 
        else             //如果中間值不大於輸入值 
           min=mid+1;    //使用較大的一半區域繼續比對 
     }
     if (Isfound==true)
         cout  << s << " 在陣列中！\n";
     else
         cout  << s << " 不在陣列中！\n";
   }
   return 0;
}
