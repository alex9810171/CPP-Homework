#include <iostream>
using namespace std;
int main()
{
     int num[]={67,12,9,52,91,3};
     int n=sizeof(num)/sizeof(num[0]); //�}�C����
     int s,i,j,min,max,mid;
     bool Isfound;
     for (i=0;i<n-1;i++)  // �}�C�Ƨ�
     {
        for (j=i+1;j<n;j++)
        {
            if (num[i]>num[j])
            {
               int x=num[i];  // �洫�s�� 
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
     cout << "�п�J�d�߸��X�G";
     cin >> s;
     while (min<=max)
     {
        mid=(min+max)/2;
        if ( num[mid]==s)  //���X�۲� 
        {
           Isfound=true;
           break;
        }
        if (num[mid]>s)  //�p�G�����Ȥj���J�� 
           max=mid-1;    //�ϥθ��p���@�b�ϰ��~���� 
        else             //�p�G�����Ȥ��j���J�� 
           min=mid+1;    //�ϥθ��j���@�b�ϰ��~���� 
     }
     if (Isfound==true)
         cout  << s << " �b�}�C���I\n";
     else
         cout  << s << " ���b�}�C���I\n";
   }
   return 0;
}
