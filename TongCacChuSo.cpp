#include <iostream>
using namespace std;
int main()
{
	int n, Sum=0;
	cout << "Nhap vao 1 so nguyen: ", cin >> n;
	while (n != 0)		// Sử dụng cấu trúc vòng lặp while để tách từng chữ số đã nhập (chia 10 đến khi n=0 thì dừng)
	{
		Sum = Sum +  n % 10;
		n = n / 10;
	}
	cout << "Tong cac chu so trong so da nhap la: " << Sum << endl;
	return 0;
}
