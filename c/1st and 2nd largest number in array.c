#include<stdio.h>
int main(){
    int i, large=0;
    int num[10]={97, 88, 41, 103, 67, 89, 99, 55, 28, 115};
    for (i = 0; i < 10; i++)
    {  
        
        if (num[i]>large)
        {
            large=num[i];
        }        
    }
    printf("The greatest element in the array is %d",large);

}
