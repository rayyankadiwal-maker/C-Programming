/**name: Rayyan A Kadiwal
Div:F 
Branch:Mechanical
Roll No: 20
UIN NO:251M023**/
#include <stdio.h>

void counter() {
    static int count = 0;
    count++;
    printf("The function has been called %d times.\n", count);
}

int main() {
    counter();
    counter();
    counter();
    counter();
    
    return 0;
}