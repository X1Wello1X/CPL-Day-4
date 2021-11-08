#include <stdio.h>
int main() {
	int N,M,X,i,j;
	printf("enter number of rows : ");
	scanf("%d",&N);
	printf("enter number of columns : ");
	scanf("%d",&M);
	int a[N][M];
	for ( i=0;i<N; i++){
		for(j=0; j<M; j++){
			a[i][j]= rand() %10;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("enter number you want to search for: ");
	scanf("%d",&X);
	
	for ( i=0;i<N; i++){
		for(j=0; j<M; j++)	{
			if (a[i][j]==X){
			printf("Found the number %d in the array",X);
			return(0);
			} 
				
		}
}printf("not found");
return(0);
}
	

