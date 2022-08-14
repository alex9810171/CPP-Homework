#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;	// 建立檔案輸出物件	
	//建立sample01.txt檔案，執行寫入動作
	file.open("sample01.txt", ios::out);
	//判斷檔案是否能開啟′開啟成功才會寫入資料
	if(file.fail()){
       cout << "檔案無法開啟!\n";
       system("pause");
       return 0; //中斷程式的執行
	}
	    file << "編號\t名稱\n";
    file << "A01\t香吉士\n";  

    cout << "檔案建立成功\n";   
	
//	else{
//		file << "姓名  \t分數\n";			//寫入資料
//		file << "王大同\t253\n";		//寫入資料
//		cout<< "檔案建立成功....\n";
//	}
	file.close();							//(4)關閉檔案
	system("pause");
    //return 0;
	return 0;
}
