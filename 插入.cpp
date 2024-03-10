#include<stdio.h>
void insertion_sort(int *number,int n)
{
	int i,j,t;
	for(i=1;i<n;i++){
		t=number[i];
		j=i-1;
		while(j>=0&&t<number[j]){
			number[j+1]=number[j];
			j--;
		}
		number[j+1]=t;
	}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int number[n];
	for(i=0;i<n;i++){
		scanf("%d",&number[i]);
	}
	insertion_sort(number,n);
	for(i=0;i<n;i++){
		printf("%d ",number[i]);
	}
	return 0;
}
