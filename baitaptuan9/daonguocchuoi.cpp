#include <iostream>

using namespace std;

int main(){
	char chuoi[1000];
	cin.getline(chuoi,1000);
	char daonguoc[1000];
	int i,n = 0;
	while(chuoi[n] != '\0')
	{		
		n++;		
	}
	while(n >= 0)
	{
		n--;
		daonguoc[i] = chuoi[n];			
		i++;
	}
	cout << daonguoc;	
}
