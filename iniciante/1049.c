#include<stdio.h>
int main(){
char x[12], y[12], z[12];
scanf("%s %s %s", &x, &y, &z);
if(x[0] == 'v'){
	if(y[0] == 'a'){
		if(z[0] == 'c'){
			printf("aguia\n");
		}
		if(z[0] == 'o'){
			printf("pomba\n");
		}
	}
	if(y[0] == 'm'){
		if(z[0] == 'o'){
			printf("homem\n");
		}
		if(z[0] == 'h'){
			printf("vaca\n");
		}
	}
}
if(x[0] == 'i'){
	if(y[0] == 'i'){
		if(z[2] == 'm'){
			printf("pulga\n");
		}
		if(z[2] == 'r'){
			printf("lagarta\n");
		}
	}
	if(y[0] == 'a'){
		if(z[0] == 'h'){
			printf("sanguessuga\n");
		}
		if(z[0] == 'o'){
			printf("minhoca\n");
		}
	}
}





return 0;
}