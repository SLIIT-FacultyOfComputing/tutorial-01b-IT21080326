/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int no1,int no2);
int mixmum(int no1,int no2);
int multiply(int no1,int no2);

int main()
{
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d",&no1);
   printf("Enter a value for no 2 : ");
   scanf("%d",&no2);
   printf("%d\n",minimum(no1,no2));
   printf("%d\n",mixmum(no1,no2));
   printf("%d\n",multiply(no1,no2));
   return 0;
}

int minimum(int no1,int no2){
    int minimum;
    if(no1>=no2){
        minimum=no2;
        }
        else{
            minimum=no1;
        }
        return minimum;
}

int mixmum(int no1,int no2){
    int mixmum;
    if(no1>=no2){
        mixmum=no1;
        }
        else{
            mixmum=no2;
        }
        return mixmum;
}

int multiply(int no1,int no2){
    int multiply;
    multiply=no1*no2;
    return multiply;
}