#include <stdio.h>
#include <math.h>

int main(){
	long long int a,count=0,sum=0,max=0,min=0,avg;
	while(scanf("%lld",&a)!=EOF){
		sum=sum+a;
		if(count==0)
			min=a;
		count+=1;
		
		if(a>max)
			max=a;
		
		if(a<min)
			min=a;
		avg=sum/count;
	}
	printf("%lld %lld %lld",max,min,avg);
}
