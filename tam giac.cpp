#include<stdio.h>
#include<math.h>
int main(){
		printf("Nhap 3 canh cua tam giac:");
	int a;
	scanf("%d",&a);
	int b;
	scanf("%d",&b);
	int c;
	scanf("%d",&c);
	double P,p,S;
	
	if ((a+b>c) || (a+c>b) || (b+c>a)){
		printf("Day la 3 canh cua tam giac \n");
		p =a+b+c;
		printf("Chu vi tam giac la: p = %lf \n",p);
	    P =(a+b+c)/2;
	    S= sqrt(P*(P-a)*(P-b)*(P-c));
	    printf("Dien tich tam giac la: S = %lf \n",S);
	}else{
		printf("Day khong phai la tam giac");
	}
}
