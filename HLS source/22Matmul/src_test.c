#include "src.h"

int main(){
	int a[2][2];
	int b[2][2];

	int c[2][2];

	a[0][0]=1; a[0][1]=2; a[1][0]=0; a[1][1]=1;
	b[0][0]=1; b[0][1]=2; b[1][0]=0; b[1][1]=1;
	c[0][0]=0; c[0][1]=0; c[1][0]=0; c[1][1]=0;

	matmul(a,b,c);
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
