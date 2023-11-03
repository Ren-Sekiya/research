#include <stdio.h>
 
#define PI 3.14f
#define calc(r) do {double area = PI * r * r; printf("半径%fの円の面積は: %f\n", r, area); } while(0)
 
int main(void) {
    calc(10.0f);
    
    return 0;
}
