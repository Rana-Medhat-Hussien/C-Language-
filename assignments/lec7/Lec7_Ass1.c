#include<stdio.h>
void sort (int *ptr,int n);
int main (){
       int arr[5]={5,2,1,4,3};
	   sort(&arr,5);
	   printf("The bubble sorting array = ");
	   for(int i=0;i<5;i++){
		   printf("%d ",arr[i]);
	   }	   
return 0;
}
void sort (int *ptr,int n){
    int temp ;
	for (int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(*(ptr+j+1)< *(ptr+j) ){
			temp=*(ptr+j+1);
			*(ptr+j+1)=*(ptr+j);
			*(ptr+j)=temp;
		   }
		}
		
	}
}
