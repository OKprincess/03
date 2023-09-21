//
//  main.c
//  03.3
//
//  Created by ok sojoung on 2023/09/21.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char ch_in;
    
    printf("enter a character : ");
    scanf("%c", &ch_in);
    
    printf("the next character of %c (%d) is %c (%d)\n", ch_in, ch_in, ch_in+1, ch_in+1);
    
    return 0;
}

