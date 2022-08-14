#include <iostream>
using namespace std;
int main()
{
    int a[]= {20, 45, 98, 23, 85};
    int n=sizeof(a)/sizeof(a[0]); // 元素個數
    cout << "排序前數值序列：\n";
    for (int i=0;i<n;i++)
        cout << a[i] << " ";
    for (int i=0;i<n-1;i++)  // 陣列排序
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[i]<a[j])
            {
               int x=a[i];  // 交換
               int y=a[j];
               a[i]=y;
               a[j]=x;
             }
        }
    }
    cout << "\n由大到小排序後：\n";
    for (int i=0;i<n;i++)
        cout <<  a[i] << " ";
    cout << "\n";
    system("pause");
    return 0;
}
