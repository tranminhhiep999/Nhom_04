#include <iostream>
using namespace std;
bool Lasonguyento(int n)
	{				//Tạo một biến phụ để thực hiện việc kiểm tra n 
		if (n<3)	
			return true;		//Cho i chạy từ 2, nếu n/i mà ko dư thì ko là sô nguyên tố và ngược lại, n>=i
		for (int i = 2; n>=i; i++)
			if (n%i == 0)
				return false;
		return true;			//nếu ko thỏa đk for trên thì là số nguyên tố
	}
int main()
	{
		int n;
		cout << "Nhap vao so nguyen duong n: "; cin >> n;
		if (Lasonguyento(n) == true)
			cout << n << " la so nguyen to nha!";		//Xuất ra kết quả n là số gì
		else
			cout << n << " khong la so nguyen to nha!"; cout << endl;
		return 0;
	}