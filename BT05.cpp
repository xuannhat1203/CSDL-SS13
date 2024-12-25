#include<stdio.h>
#include<stdlib.h>
void sapxepnoibot(int arr[],int n){
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		count++;
	}
	printf("Mang sap xep hoan thien sau %d lan\n", count);
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
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
	sapxepnoibot(arr,n);
}

