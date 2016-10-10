#include <iostream>

using namespace std;

int main(){
	char chuoi[12] = "Hello World";
	char daonguoc[12];
	int n = 12;
	n = n - 1;
	int i = 0;
	while(n != 0){
		n--;
		daonguoc[i] = chuoi[n];	
		i++;
		} 
	cout << daonguoc;
		
		
}
