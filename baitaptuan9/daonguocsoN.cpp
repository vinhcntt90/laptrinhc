#include <iostream>


using namespace std;

int main(){
	int n = 0;
	cin >> n;
	int i = 0;
	char chuoi[100];
	while(i < n)
	{
		cin >> chuoi[i];
		i++;
	}
	i = i - 1;
	while(i >= 0)
	{	
		cout << chuoi[i] << " ";
		i--;
	}
	
}
