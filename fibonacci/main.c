//
//  main.c
//  fibonacci
//
//  Created by HyperLee on 2022/2/15.
//

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main(int argc, const char * argv[]) {

    int result;
    int number;
    //int i;
    
    printf("Enter yout number: ");
    scanf("%d", &number);
    
    result = fibonacci(number);
    
    
    printf("Fibonacci(%1d) = %1d\n", number, result);
    
    
    return 0;
}


int fibonacci(int n)
{
    if(n ==0 || n ==1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1 ) + fibonacci(n - 2);
    }
}

