#include <stdio.h>

int addition (int num1, int num2);
int multipication (num1,num2);
void mySwap (int *a, int *b);

void main()
{
int num1, num2, myAddition, myProduct;
num1=4;
num2=5;
int sum, product;


myAddition = addition(num1,num2);
printf("Addition is :%d", myAddition);
printf("\n");

myProduct = multipication(num1,num2);
printf("Multipication is : %d", myProduct);
printf("\n");

sum = myAddition;
product = myProduct;
mySwap(&sum, &product);
printf("sum is %d and product is %d\n", sum,product);

}

int addition (int num1, int num2) {
 int sum = num1+num2;
 return sum;
}

int multipication (int num1,int num2) {
     int product = num1* num2;
     return product;
}

void mySwap (int *a, int *b)
{
    int var;
    var = *a;
    *a = *b;
    *b = var;
}
