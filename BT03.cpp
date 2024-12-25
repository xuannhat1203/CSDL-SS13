#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sapxepchon(int arr[],int n){
	for(int i=0;i<n;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			if(arr[j] < arr[i]){
				min = j;
			}
		}
		swap(&arr[min],&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
}
int findIndex(int arr[],int n,int value){
	for(int i=0;i<n;i++){
		if(arr[i] == value){
			return i;
		}
	}
	return 0;
}
int main(){
	int n;
	printf("Nhap so luong phan tu trong mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Mang sau khi sap xep: ");
	sapxepchon(arr,n);
	int value;
	printf("\nnhap phan tu muon tim kiem: ");
	scanf("%d",&value);
	printf("\nPhan tu can tim o vi tri thu: %d",findIndex(arr,n,value));
}

