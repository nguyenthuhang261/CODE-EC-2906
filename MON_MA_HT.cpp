#include<stdio.h>
#include<string.h>

// em chua nghi ra cach sap xep khi no la ky tu

// sap xep mon khi la so
struct mon{
	int ma;
	int mon;
	int ht;
};
struct mon k, p[1005];

int main()
{
	for(int i = 1; i <= 3; i++){
		scanf("%d%d%d", &p[i].ma, &p[i].mon, &p[i].ht);
		
	}
	for(int i = 1; i <= 2; i++){
		for(int j = i; j <= 3; j++){
			if(p[i].ma > p[j].ma){
				k = p[i];
				p[i] = p[j];
				p[j] = k;
			}
		}
	}
	for(int i = 1; i <= 3; i++){
		printf("%d %d %d\n", p[i].ma, p[i].mon, p[i].ht);
	}
}

