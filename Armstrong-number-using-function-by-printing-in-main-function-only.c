#include<stdio.h>
#include<math.h>
int armstrong(int num){
    int numForDigits,copiedNum,digits=0,n,finalNumber=0;
    numForDigits=copiedNum=num;
    while(numForDigits!=0)
    { digits++;
         numForDigits/=10;
    }
    while(copiedNum!=0)
    { n=copiedNum%10;
      finalNumber=finalNumber+pow(n,digits);
      copiedNum/=10;
    }
    if(finalNumber==num){
       return 1;
    }
   
    else{
        return 0;
    }
   
}
int main()
{ int num;
  printf("Enter num: ");
  scanf("%d",&num);
 
  if(armstrong(num)){
        printf("%d is an armstrong number\n",num);
    }
   
    else{
        printf("%d is not an armstrong number\n",num);
    }
 return 0;
}

