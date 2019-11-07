#include<stdio.h> 
#include<limits.h>
#include<float.h>

int main() 
{
    printf("size of unsigned char\t:%d\n",sizeof(char));
    printf("size of signed char\t:%d\n",sizeof(signed char));
    printf("size of signed int\t:%d\n",sizeof(int));
    printf("size of unsigned int\t:%d\n",sizeof(unsigned int));
    printf("size of double\t:%d\n",sizeof(double));
    
    printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
    printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
    printf("The minimum value of UNSIGNED CHAR = %d\n", 0);
    printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);
    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n", INT_MAX);
    printf("The minimum value of UNSIGNED INT = %d\n", 0);
    printf("The maximum value of UNSIGNED INT = %d\n", UINT_MAX);
    
    printf("The maximum value of double = %e\n", DBL_MAX);
    printf("The minimum value of double = %e\n", DBL_MIN);
    
    
    //integer i is initialized to UINT_MAX
    unsigned int i=UINT_MAX;
    
    
    //integer i becomes reset to 0 when it overflows the maximum value it can store
    i+=1;
    
    if(i==0)
    {
    	printf("\ninteger i memory overflow\nCurrent value of i is reset to %d\n",i);
    }
    
    
    //To find the maximum value without limits.h
    i=-1;
    printf("\nThe maximum value of UNSIGNED INT = %u\n",i);
    
    
    return 0;
}