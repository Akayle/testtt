//tim cac so co 3 chu so sao cho so hang chuc chia het cho 5 va so hang don vi chia het cho 3
/*#include <stdio.h>
int main(){
    int a,b,c,i;
    int n;
    for(a=1;a<=9;a++)
    for(b=0;b<=9;b++)
	for(c=0;c<=9;c++)
	if(b%3==0 && c%5==0){
		printf("%d%d%d",a,b,c);
	}		
	}
//t=1^3-3^3+...(2*n-1)^3
#include <stdio.h>
#include <math.h>
int main(){
    int n,a,i;
    for(i=1;i<=n,i++){
        if(n>0)
            a=a+pow(2*n-1,3);
            printf("%d",a);
    }
}
// vua ga vua cho bo lai cho tron 36 con 100 chan chan hoi co bao nhieu ga bao nhieu cho?
#include <stdio.h>
int main(){
    int j,i;
    for(i=1;i<=36;i++)
    for(j=1;j<=36;j++)
    if(i+j==36 && 2*i+4*j==100){
        printf("so con ga la %d",i);
        printf("so con cho la %d",j);

    }
}
//tim cac so co ba chu so abc thoa man abc=a^3+b^3+c^3
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    for(a=1;a<=9;a++)
    for(b=0;b<=9;b++)
    for(c=0;c<=9;c++)
    if(a*100+b*10+c==pow(a,3)+pow(b,3)+pow(c,3))
    {
        printf("\nso thoa man la: %d",a*100+b*10+c);
    }
}
//co bao nhieu cach doi 1 to 200 ra thanh cac to tien 10,20,50,100
#include <stdio.h>
int main(){
    int a,b,c,d;
    for(a=0;a<=20;a++) // neu vao bai toan nhap 1 so tien bat ki de doi thi thay  a<=x/20
    for(b=0;b<=10;b++) 
    for(c=0;c<=4;c++)
    for(d=0;d<=2;d++)
    if(a*10+b*20+c*50+d*100==200){
        printf("\nvay co the doi ra so to 10k la %d",a);
        printf("\nvay co the doi ra so to 20k la %d",b);
        printf("\nvay co the doi ra so to 50k la %d",c);
        printf("\nvay co the doi ra so to 100k la %d",d);
        printf("\n------------------------------------");
    }
}

#include <stdio.h>
int main(){
    int n,i;
    printf("nhap n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    if(n%i==0) break;{// dừng vòng lặp
        printf("n khong phai so nguyen to");
    }
}
#include<stdio.h>

int gt(int n) // thiet lap 1 ham
{
    int i, s=1;
    for(i=2;i<=n;i++)
    s=s*i;
    return s;//tra ve gia tri s
}
int main(){
    int a,b,c,s;
    printf("nhap a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    s=gt(a)+gt(b)+gt(c);
    printf("s=%d!+%d!+%d!=%d",a,b,c,s);
    
}
//s=1+1/3!-1/5!+...1/(2n-1)!
#include<stdio.h>
int gt(int n);
int gt(int n){
    int i,s=1;
    for(i=1;i<=n;i++)
    s=s*i;
    return s;
}; // giai thua cua n
main(){
	float s=1; int i,n;
    printf("N=");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    if(n%2==0){
        s=s+1/(float)gt(2*i-1);
    }else{
        s=s-1/(float)gt(2*i-1);
    }printf("%3.1f",s);

}
#include <stdio.h>
void tinhtong(int a,int b){
    printf("\n%d",a+b);
}
void tinhhieu(int a,int b){
    printf("\n%d",a-b);
    
}
void tinhtich(int a,int b){
    printf("\n%d",a*b);
    
}
void tinhthuong(int a,int b){
    printf("\n%d",a/b);
    
}
int main(){
int a,b;
printf("nhap a,b");
scanf("%d%d",&a,&b);
tinhtong(a,b);
tinhhieu(a,b);
tinhtich(a,b);
tinhthuong(a,b);
}
#include<stdio.h>
int songuyento(int n){
    int i,d=1;
    for(i=2;i<n;i++)
    if(n%i==0){
        d=0;
        break;
    }
    return d;
}
int sohoanhao(int n){
    int i,tong;
    tong=1;
    for(i=2;i<n;i++)
    
    if(n%i==0)
        tong = tong+i;
    return tong; //tra lai gia tri sohoanhao
    }

/*int main(){
    int n;
    printf("nhap n:"); scanf("%d",&n);
    if(n==sohoanhao(n)){
        printf("%d la so hoan hao",n);
    }else
        printf("%d kp so hoan hao",n);
}

int main(){
    int n;
    printf("nhap n"); scanf("%d",&n);
    printf("kt=%d\n",songuyento(n));
    if(songuyento(n)==1){
        printf("%d la so nguyen to",n);
    }else{
        printf("%d kp so nt",n);
    }
}*/
#include<stdio.h>

int songuyento(int n){
	int i;
	for(i=2;i<n;i++)
	if(n%i==0)
	{
		return 0;
	}
	return 1; 
}
float tbcsnt(int a[],int n){
   int tong=0,dem=0;
   for(int i=0;i<n;i++)
   if(songuyento(a[i])==1){
   	dem++;
   	tong=tong+a[i];
   }
   return (float) tong/dem;

}
int sohoanhao(int n){
	int i,t=0; 
	for(i=2;i<n;i++)
	if(n%i==0){
		t=t+i;
	}
	if(t==n){
		return 1;
	}
	return 0;
}
float tbcshh(int a[],int n){
   int tong=0,dem=0;
   for(int i=0;i<n;i++)
   if(songuyento(a[i])==1){
   	dem++;
   	tong=tong+a[i];
   }
   return (float) tong/dem;

}


int main(){
    int n,i,t=0;
    int a[20];
    printf("nhap n");   
    do{
        scanf("%d",&n);
        if(n<=0){
            printf("nhap lai");
        }

    }while(n<=0);
    for(i=0;i<n;i++){
    printf("a[%d]=",i+1);   scanf("%d",&a[i]);
    }
    
    printf("trung binh cong cua cac ptu trong mang: %f ",tbcsnt(a,n));
    printf("trung binh cong cua cac ptu trong mang: %f ",tbcshh(a,n));
}

