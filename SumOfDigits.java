import java.util.*;
class SumOfDigits
{
    public static void main(String args[])
    {
       Scanner in=new Scanner(System.in);
        int num=in.nextInt();
        int sum=0;
        while(num>0||sum>9)
        {
            if(num==0)
            {
                num=sum;
                sum=0;
            }
            sum+=num%10;
            num/=10;
        }
        System.out.println("Sum : "+sum);
        
    }
}


