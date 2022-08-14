#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    fstream file;  	// 建立檔案輸出、輸入物件	
    char filename[20];
    char buffer[80];
    int n=1;
    cout << "請輸入檔名：";
    cin >> filename; 
    file.open(filename, ios::in); //開啟檔案
    if(!file) //檢查檔案是否成功開啟
         cout << "檔案無法開啟!\n";
    else
    {
        do 
        {
            file.getline(buffer,sizeof(buffer)); // 每次讀取一行 
            cout << n << ": " << buffer << endl;  
            n++;
        } while(!file.eof());        // 是否至檔案結尾 
        file.close();   //關閉檔案
    }
    system("pause");
    return 0;
} 
