#include <iostream>
using namespace std;
int main()
{
    char password[20];
    cout << "請輸入加密後的密碼："; 
    gets(password);  //取得輸入字串 
    cout << "解密後的密碼：";
    for(int i=0;i<strlen(password);i++)  //逐一處理字元 
    {
        password[i]--;  //將字元碼減1，即B變為A、C變為B、依此類推 
        cout << password[i];
    }
    cout << "\n";
    system("pause");
    return 0;
}
