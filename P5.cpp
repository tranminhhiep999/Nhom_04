
#include <iostream>
using namespace std;
int main()
{
	long long n,sum;
	cout << "Nhap vao so nguyen duong n: "; cin >> n;
	if (n <= 0) cout << "Nhap lai n" << endl;
	else
	{
		int sum = 0 ;
		cout << "Cac uoc so cua " << n << " la: ";
		for (int uocso = 1; uocso <= n; uocso++)		//Cho uocso tăng dần để lấy ra ước số của n
		{
			if (n % uocso == 0)
			{
				cout << uocso << " ";	//Liêt kê ra các ước của n
				sum += uocso;			//Đồng thời tính tổng các ước của n và khai báo ra kết quả
			}
		}
		cout << endl;
		cout << "Tong cac uoc la: " << sum << endl;
	}
	return 0;
}