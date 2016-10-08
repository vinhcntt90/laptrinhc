#include<iostream>


using namespace std;
int hesomuoi(int n, int kq = 0,int b = 1)
{
	while(n != 0) // Vong lap dung khi n = 0
	{
 		kq += b * (n % 10);
 		n /= 10;
 		b *= 2;
 	}
 	return kq; // tra ve gia tri bien kq cho ham
}
int nhiphan(int sum){
	int b;
	int i = 0;
	int mang[100];
	int kq;
	while(sum > 0) // Vong lap dung khi n = 0
		{
		int b = sum; // Gan gia tri N cho b
		sum /= 2;
		mang[i++] = b - (sum*2);				
		}
		i = i - 1;
  		while(i>=0) // dung khi i < 0
  		{    
  		kq = mang[i--];	
		  cout << kq;	 
  		}
  		
  		
	}

int main(){
	int n,m,sum;
	int i = 0;
	int mang[100];
	cin >> n >> m;
	n = hesomuoi(n);
	m = hesomuoi(m);
	sum = n+m;	
	cout << nhiphan(sum);
}
