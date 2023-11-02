かなり怪しい

#include <stdio.h>
 
#define PI 3.14f
#define CIRCLE_RATIO "円周率"
 
int main(void) {
    double area = PI * 10 * 10;
    char *ptr = CIRCLE_RATIO;
    
    printf("%sは: %f\n", ptr, PI);
    printf("半径10の円の面積は: %f\n", area);
    
    return 0;
}
