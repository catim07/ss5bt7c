#include<stdio.h>
int main(){
	int a,b;
	printf("moi ban nhap so thu nhat: ");
	scanf("%d",&a);
		printf("moi ban nhap so thu hai: ");
	scanf("%d",&b);
	if(a<0||b<0){
		printf("moi ban nhap lai so lon hon 0");
		return 1;
	}else if(a==0||b==0){
		printf("uoc chung lon nhat la %d",(a+b));
		
	}else{
		while(a!=b){
			if(a>b){
				a=a-b;
			}else{
				b=b-a;
			}
		}
	}
	printf("uoc chung lon nhat la %d",a);
	return 0;
}
