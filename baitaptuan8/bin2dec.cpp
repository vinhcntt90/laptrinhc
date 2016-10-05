#include <iostream>

using namespace std;

int main() {
	int N; // N là mot so tu nhien o dang nhi phan
	int b = 1, KQ = 0, i = 0;
	int L = 0;  // so chu so cua N
	cin >> N;
	
	// tim L
	int tmp = N;
	while(N > 0) {
		N /= 10;
		L++;
	}
	N = tmp;
	
	for (i = 0; i < L; i++) {
		KQ += b * (N % 10);
		N /= 10;
		b *= 2;
	}
	
	cout << KQ << endl;

}
