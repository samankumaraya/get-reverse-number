#include <stdio.h>

int main()
{

 int num;

 printf("Enter the number :");
 scanf("%d",&num);

while(num!= 0){

    printf("%d",num%10);
    num=num/10;

 if(num<0){
        num=num*(-1);
    }

}

    return 0;
}
