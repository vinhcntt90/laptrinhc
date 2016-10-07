#include<iostream>

using namespace std;

/**
 * Hàm chuyển một số tự nhiên ở hệ cơ số 10 (decimal) ra hệ nhị phân (binary)
 * @input: truyền vào cho hàm số tự nhiên n
 * @return: hàm trả ra kết quả là số tự nhiên n ở dạng nhị phân
 *
 * @example:
 *    Khi chạy đoạn code sau trong hàm main
 *
 *    int bin = dec2bin(13);
 *
 *    bin sẽ có giá trị là 1101 sau khi chạy dòng lệnh trên
 */
int dec2bin(int n)
{
    int kq = 0; // kq là số tự nhiên biểu diễn n ở dạng nhị phân
    int arr[100]; // mảng tạm
    int length = 0;

    while (n > 0) {
        //@TODO: hoàn thiên dong code dưới
        arr[length] = ;

        length++;
        n = n / 2;
    }

    for (int i = length - 1; i >= 0; i--) {
        //@TODO: hoàn thiên dong code dưới để tìm được kq là kết quả mong muốn
        kq = ;
    }

 	return kq; // tra ve gia tri bien kq cho ham
}

/**
 * Binary to decimal
 * Hàm chuyển một số tự nhiên ở hệ cơ số nhị phân (binary) ra hệ cơ số 10 (decimal)
 * @input: truyền vào cho hàm số tự nhiên n ở dạng nhị phân
 * @return: hàm trả ra kết quả là số tự nhiên n ở dạng cơ số 10
 *
 * @example:
 *    Khi chạy đoạn code sau trong hàm main
 *
 *    int de = bin2dec(1101);
 *
 *    biến de sẽ có giá trị là 13 sau khi chạy dòng lệnh trên
 */
int bin2dec(int n)
{
    int kq = 0, b = 1;
    while(n > 0) // Vong lap dung khi n = 0
	{
 		kq += b * (n % 10);
 		n /= 10;
 		b *= 2;
 	}

    return kq;
}

/**
 * Chương trình tính tổng 2 số nhị phân, giải theo cách cơ bản
 * đổi 2 số nhị phân ra hệ cơ số 10, cộng 2 số lại rồi đổi kết quả
 * về hệ nhị phân
 */
int main(){
	int n,m,sum;
	cin >> n >> m;
	sum = bin2dec(n) +  bin2dec(m);

	cout << dec2bin(sum) << endl;
}
