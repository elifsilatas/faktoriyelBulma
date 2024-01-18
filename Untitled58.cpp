#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "Faktoriyelini bulmak istediginiz sayiyi giriniz: ";
	int n;
	cin >> n;
	int carpim = 1;
	for(int i=1; i<(n+1); i++){
		if(n == 0 || n == 1){
			carpim = 1;
		}
		else if(n!=0 & n!=1 & n>0){
			carpim = carpim*i;	
		}
	}
	cout << "Sonuc: " << carpim << endl;
}