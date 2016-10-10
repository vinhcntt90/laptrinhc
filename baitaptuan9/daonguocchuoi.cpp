#include <iostream>

using namespace std;

int main(){
	char chuoi[1000];
	cin.getline(chuoi,1000);
	char daonguoc[1000];
	int i,n = 0;
	while(chuoi[n] != '\0') // dung khi chuoi khac null
	{		
		n++;	//dem xem co bao nhieu ki tu o chuoi.	
	}
	while(n >= 0) // lay gia tri chuoi sang dao nguoc.
	{
		n--;
		daonguoc[i] = chuoi[n];			
		i++;
	}
	cout << daonguoc;	
}
