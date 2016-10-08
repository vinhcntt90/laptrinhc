#include <iostream>

using namespace std;

int main(){
	int n;
	cout << "Nhap so n : ";
	cin >> n;
	int num = 2;
	if(n > 2)
	{
		while(num < n)
		{
		if(n % num == 0){
			cout << "So "<<n<<" khong phai la so nguyen to."<<endl;
			break;
		}
		num++;
		}
		if(num == n){
			cout <<n<<" la so nguyen to."<<endl;
		}
	}
	else{
		cout <<"So "<<n<<" la so nguyen to."<<endl;
	}

	
}
