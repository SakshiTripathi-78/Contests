#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d",&a,&b);
    float theta;
    printf("Enter the value of theta: \n");
    scanf("%f",&theta);
    theta=(theta*3.14)/180;
    float x=sin(theta);
    float y=cos(theta);
    float z=tan(theta);
    float ans=sqrt(a*a*x + b*b*z)/2*y;
    printf("The answer is: ");
    printf("%f",ans);
}