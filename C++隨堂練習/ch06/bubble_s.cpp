#include <iostream>
using namespace std;
int main()
{
    int a[]= {20, 45, 98, 23, 85};
    int n=sizeof(a)/sizeof(a[0]); // �����Ӽ�
    cout << "�Ƨǫe�ƭȧǦC�G\n";
    for (int i=0;i<n;i++)
        cout << a[i] << " ";
    for (int i=0;i<n-1;i++)  // �}�C�Ƨ�
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[i]<a[j])
            {
               int x=a[i];  // �洫
               int y=a[j];
               a[i]=y;
               a[j]=x;
             }
        }
    }
    cout << "\n�Ѥj��p�Ƨǫ�G\n";
    for (int i=0;i<n;i++)
        cout <<  a[i] << " ";
    cout << "\n";
    system("pause");
    return 0;
}
