#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a = 0;
	int mang[100];
	while(n != 0){ // Dung khi n = 0
		mang[a] = n%10;
		n = n/10;
		a++;
	}
	while(a > 0){ // Dung khi a < 0
		cout << mang[a = a - 1] << endl;
	}
}
