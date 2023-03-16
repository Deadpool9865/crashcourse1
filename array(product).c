#include <stdio.h>
int main(){
int array[5];
int product=1;
printf("Enter an array\n");
for (int i =0;i<5;i++)
{
    scanf("%d",&array[i]);
}
for (int j=0;j<5;j++){
    product*=array[j];
}
printf("Products of elements=%d",product);
}
