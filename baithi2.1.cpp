#include <stdio.h>
int main(){
	float sum, rate ,interest;
	int time;
	printf("Enter Capital Sum\n");
	scanf("%f",&sum);
	printf("Enter Rate of Interest \n");
	scanf("%f",&rate);
	printf("Enter No. of Years\n");
	scanf("%d",&time);
	for(int i = 0 ; i < time ; i ++){
		
		printf("Year\tInterest\tSum\n");
		interest = sum*rate/100;
		sum += interest;
		printf("%d\t%f\t%f\n",i+1,interest,sum);
	}
}

