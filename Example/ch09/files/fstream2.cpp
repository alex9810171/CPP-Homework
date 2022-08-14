//將資料輸出至檔案 
#include <iostream>
#include <fstream>
#include <stdlib.h> //使用exit須載入stdlib標頭檔
using namespace std;
int main() //主程式開始
{
    fstream file;
    char buffer[200];
    
    char *str[4] = {"Mary","John","Judy","Joe"}; //宣告字串指標陣列
    int id[4] = {100,200,300,400};
    file.open("Reader.txt", ios::out); //開啟檔案
    if(!file) //檢查檔案是否成功開啟
    {
       cerr << "Can't open file!\n";
       return 0; //在不正常情形下，中斷程式的執行
    }
    for(int i = 0; i < 4; i++)
    {
       file << id[i] << " " << str[i] << "\n";
    } //將資料輸出至檔案
    file.close();
    
    file.open("Reader.txt",ios::in);
    file.read(buffer,200);
    cout << buffer << endl;
    
    system("pause");
    return 0;
} //主程式結束 

