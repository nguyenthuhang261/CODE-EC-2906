#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char n[1001];
	fgets(n, sizeof(n), stdin);
	int x = strlen(n) - 1;
	int a[500] = {0}, k = 0;
	int cnt[500]={0};
	for(int i = 0;  i < x; i += 2){
		a[k] = (n[i] - '0') * 10 + (n[i + 1] - '0');
		if(cnt[a[k]] == 0){
			printf("%d ", a[k]);
			cnt[a[k]] = 1;
		}		
		k++;
	}
	return 0;
}
