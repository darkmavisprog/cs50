#include <cs50.h>
#include <stdio.h>

int main(void) {
    
    printf("minutes: ");
    int user_mins = GetInt();
    
    int result = user_mins * 192 / 16;
    
    printf("bottles: %d\n", result);
}
