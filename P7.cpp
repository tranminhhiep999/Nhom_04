#include <iostream>
using namespace std;
int main()
{
	long long M, N;
	int sum=0, demso=0;
	cout << "Nhap hai so nguyen duong M va N theo thu tu (M<N) " << endl;
	cout << "M="; cin >> M;
	cout << "N="; cin >> N;
	if (M >= N)
	{
		cout << "Ban oi!!! To ghi la theo thu tu M<N rui ma, chiu kho doc ki dzao gium to" << endl << "	Thiet tinh, tinh choi to chu gie~Hehe~Biet het a nha~~" << endl;
		return M;
	}
	else
	{
		for (int i=M; i <= N; i++)	//Gán giá trị thay thế i bằng M, số chẵn thì chia hết cho 2
			if (i % 2 == 0)
			{
				demso++;sum += i;	//Tổng dùng phần lặp để cộng dồn các số đã chọn ra (các số chẵn)
			}
	}								//Từ đó khai báo ra các kết quả theo yêu cầu đề bài
	cout << "So luong cac chu so chan trong doan tu " << M << " den " << N << " la: " << demso << endl;
	cout << "Tong cac chu so chan trong doan tu " << M << " den " << N << " la: " << sum << endl;
	return 0;
}