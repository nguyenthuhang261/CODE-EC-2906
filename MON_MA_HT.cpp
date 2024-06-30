#include<stdio.h>
#include<string.h>

struct mon{
	char ma[500];
	char mon[500];
	char ht[500];
};
struct mon p[5];

int main()
{
	for(int i = 1; i <= 3; i++){
		scanf("%s%s%s", p[i].ma, p[i].mon, p[i].ht);
	}
	for(int i = 1; i <= 3; i++){
		for(int j = i; j <= 3; j++){
			if(strcmp(p[i].ma, p[j].ma) > 0){
				struct mon k;
				k = p[i];
				p[i] = p[j];
				p[j] = k;
			}
		}
	}
	for(int i = 1; i <= 3; i++){
		printf("%s %s %s\n", p[i].ma, p[i].mon, p[i].ht);
	}
}
