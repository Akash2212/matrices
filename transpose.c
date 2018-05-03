#include <stdio.h>
void main()
{
	int a[10][10],b,c,d,i,j;
	printf("Enter the Number of Rows and Columns:");
	scanf("%d%d",&c,&d);
	printf("Enter the Elements of Matrix:");
	for(i=0;i<c;i++){
		for(j=0;j<d;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The Transpose of matrix is:\n");
	for(i=0;i<c;i++){
		for(j=0;j<d;j++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	
}
