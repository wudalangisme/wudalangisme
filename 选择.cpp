# include<stdio.h>
void select_sort(int a[],int n);
void select_sort(int a[],int n)
{
	int i,j,k=0,t;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[k])
				k=j;
		}
		t=a[i];
		a[i]=a[k];
		a[k]=t;
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
	select_sort(number,n);
	for(i=0;i<n;i++){
		printf("%d ",number[i]);
	}
	return 0;
}
