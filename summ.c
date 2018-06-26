#include<stdio.h>
int main()
{
    int rem,num=582109,sum=0,temp=0,c=0,fake;
    fake=num;
    while(fake>0){   
       fake/=10;
       c++;}
    int arr[c];
    for(int i=c-1;i>=0;i--){
        rem=num%10;
        arr[i]=rem;
        num/=10;}
    for(int i=0;i<c;i++){
        sum=sum+arr[i];
        temp=temp+sum;}
        printf("%d\n",temp);
}

