#include <stdio.h>
void main()
{
	int a[10][10],b[10][10],c,d,e,f,s[10][10];
	printf("Enter the Number of Rows and Columns:\n");
	scanf("%d%d",&c,&d);
	printf("Enter the Elements of Matrix A:\n");
	for(e=0;e<c;e++)
		for(f=0;f<d;f++)
			scanf("%d",&a[e][f]);
		printf("Enter the Elements of Matrix B:\n");
	for(e=0;e<c;e++){
		for(f=0;f<d;f++){
			scanf("%d",&b[e][f]);	
		}}
		printf("Addition of Matrix A and Matrix B\n");
			
	for(e=0;e<c;e++){
		for(f=0;f<d;f++){	
			s[e][f] = a[e][f] - b[e][f];
		printf("%d\t",s[e][f]);
	}
		printf("\n");
	}
}
