#include <iostream>

using namespace std;

 int main() {
 	int N; // N là mot so tu nhien o dang nhi phan
 	int b = 1, KQ = 0, i = 0;	
 	cin >> N;
 	while(N != 0) 
	{
 		KQ += b * (N % 10);
 		N /= 10;
 		b *= 2;
 	}
 	cout << KQ << endl;
 
 }
