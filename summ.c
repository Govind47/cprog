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
/*Sum of Sums of Digits in Cyclic Order
Alex has been 
asked by his teacher to do an assignment on sums of digits of a number. 
The assignment requires Alex to find the sum of sums of digits of a 
given number, as per the method mentioned below.
If the given number 
is 582109, the sum of sums of digits will be calculated 
as=(5)+(5+8)+(5+8+2)+(5+8+2+1) +(5+8+2+1+0) +(5+8+2+1+0+9)
=5+13+15+16+16+25=90
Assumptions:
 For the assignment let us assume that the given number will always 
contain more than 1 digit i.e. the given number will always be>9*/

