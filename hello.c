#include <stdio.h>
void greet (const char *name){
    printf("Hello, %s! welcome to your github portfolio\n", name);
}
int main() {
    const char *name = "John Doe";
    greet(name);
    return 0;
}