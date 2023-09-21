//
//  main.c
//  03.2
//
//  Created by ok sojoung on 2023/09/21.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;
    int  i;
    
    printf("input a number:"); //한자리 숫자
    scanf("%c", &c);
    
    i = c-'0';
    printf("The input number is %i\n", i);
    
    return 0;
}
