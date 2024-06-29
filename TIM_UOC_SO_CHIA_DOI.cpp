#include<stdio.h>
#include<string.h>

long long uoc(long long a, long long b){
	while(b != 0){
		long long k =  a % b;
		a = b; 
		b = k;
	}
	return a;	
}

int main()
{
	char x[505], a[505];
	fgets(x, sizeof(x), stdin);
	int mark = 0;
	int t = 0; 
	// so thu nhat
	long long tong = 0;
	for(int i = 0; i < (strlen(x) - 1 )/ 2; i++){
		tong = tong * 10 + (x[i] - '0');
	}
	
	// so thu hai
	long long cnt = 0;
	for(int i = (strlen(x))/ 2; i < strlen(x) - 1; i++){
		cnt = cnt * 10 + (x[i] - '0');
	}
	long long fin = uoc(tong, cnt);
	printf("%lld", fin); 
	
	
}

