/*Write C code that manage a small school. The school has 3 classes each class contains 10 students. Define three arrays for the three classes each one with a length of 10.
Save a random numbers in all array elements to indicate the students grade. The program will calculate and display the following statistics:
1- Number of passed students 2- Number of Failed students 3- Highest grade 4- Lowest grade 5- Average grade Knowing that the total grade is from 100 and the minimum passing grade is 50.
*/
#include<stdio.h>
int main (){
    int i,NOP=0,NOF;
    int class1[10]={98,56,24,50,45,65,85,83,66,54};
    int class2[10]={58,40,59,88,92,65,93,98,55,100};
    int class3[10]={30,60,58,78,10,65,70,58,98,99};
	int max1,min1,sum1;
	int max2,min2,sum2;
	int max3,min3,sum3;
	float avg;
	
	for (i=0;i<10;i++){
		if (class1[i]>=50){
			NOP=NOP+1;
		}
		if (class3[i]>=50){
			NOP=NOP+1;
		}
		if (class2[i]>=50){
			NOP=NOP+1;
		}				
	}
	NOF=30-NOP;
	printf("Number of passed students:%d \n",NOP);
	printf("Number of failed students:%d \n",NOF);	
	
	max1=min1=class1[0];
	max2=min2=class2[0];
	max3=min2=class3[0];
	
//find max and min of class1
	for (i=0;i<10;i++){
	  if(max1<class1[i]){
		  max1=class1[i];
	  }
	  if(min1>class1[i]){
		  min1=class1[i];
	  }	  	  
	}
	
//find max and min of class2	
	for (i=0;i<10;i++){
	  if(max2<class2[i]){
		  max2=class2[i];
	  }
	  if(min2>class2[i]){
		  min2=class2[i];
	  }	  	 	  	  
	}
	
//find max and min of class3	
	for (i=0;i<10;i++){
	  if(max3<class3[i]){
		  max3=class3[i];
	  }
	  if(min3>class3[i]){
		  min3=class3[i];
	  }	  	 
	}	
	
//find max of 3 class	
	if (max1>max2&&max1>max3)
	{
		printf("Highest grade = %d \n",max1);
	}
	else if (max2>max1&&max2>max3)
	{
		printf("Highest grade = %d \n",max2);
	}
	else
	{
		printf("Highest grade = %d \n",max3);
	}
	
//find min of 3 class	
	if (min1<min2&&min1<min3)
	{
		printf("Lowest grade = %d \n",min1);
	}
	else if (min2<min1&&min2<min3)
	{
		printf("Lowest grade = %d \n",min2);
	}
	else
	{
		printf("Lowest grade = %d \n",min3);
	}	
	
//find summation of grades in class1
    for(i=0;i<10;i++){
		sum1=sum1+class1[i];
	}	
	
//find summation of grades in class2
    for(i=0;i<10;i++){
		sum2=sum2+class2[i];
	}	

//find summation of grades in class3
    for(i=0;i<10;i++){
		sum3=sum3+class3[i];
	}		
	
//average of grade
    avg=(sum1+sum2+sum3)/30.0;	
		
	printf("Average grade:%f ",avg);	
return 0;
}