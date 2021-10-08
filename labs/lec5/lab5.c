#include<stdio.h>
//binary search 
int main (){
	int i,num,index,right,left,arr[10];
	printf("please Enter the number of array sorted ascending ");
    for(i=0;i<10;i++){
		printf("\n Enter the number %d of the array= ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n Enter the number you search about = ");
	scanf("%d",&num);
	right=9;  // arr[size-1]
	left=0;

    while(left<=right){
	   index=((right+left)/2)+left;
	if (num==arr[index]){
		break;
	}
	else if (num>arr[index]){
		left=index+1;
	   index=((right-left)/2)+left;

	}
	else if (num<arr[index]){
		right=index-1;	
        index=((right-left)/2)+left;
		
	}
	}
	if(right<left){
		printf("number %d is not found ", num);
	}
	else{
     	printf(" number %d is found in index %d",num,index);

	}
	
return 0;
}