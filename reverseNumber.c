#include <stdio.h>
int main()
{
    int n, reversedNumber = 0; 
    int remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n != 0)   //till no. becomes 0
    {
        remainder = n%10;       //normal remainder
        
        // logic is that in remainder of the number last digit get stored so...
        reversedNumber = reversedNumber*10 + remainder;
        //to move into the digits of the fiven Number.....
        n /= 10;
    }
    printf("Reversed Number = %d", reversedNumber);
    return 0;
}



------------------------------------------------------PYTHON FILE----------------------------------------------------
n = int(input())
rev_num = 0
while n != 0 : 
    rem = n % 10
    rev_num = rev_num * 10 + rem
    n = n//10
    
print(rev_num)
