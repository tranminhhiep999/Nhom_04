#include<iostream>
using namespace std;

int main()
{
	int i=1, n;
	cout << "Nhap vao so nguyen duong N: "; cin >> n;
	while (n>0)
		if ((n / i) < 10)		//Chữ số đó phải thỏa nhỏ hơn 10 để có thể gán chữ vào, nếu lớn hơn thì tăng biến phụ (i) lên 
		{
			switch (n / i)		//Chọn 1 trong 10 chữ số để gán vào
			{
			case 0:cout << "Khong"; break;
			case 1:cout << "Mot "; break;
			case 2:cout << "Hai "; break;
			case 3:cout << "Ba "; break;
			case 4:cout << "Bon "; break;
			case 5:cout << "Nam "; break;
			case 6:cout << "Sau "; break;
			case 7:cout << "Bay "; break;
			case 8:cout << "Tam "; break;
			case 9:cout << "Chin "; break;
			}
			n %= i;			//Lấy phần dư của n để đem gán các chữ số còn lại
			i /= 10;		//biến phụ giảm xuống 10 lần để đem tách các chữ số còn lại trong n
		}
		else i *= 10;
	return 0;
}
