#include<stdio.h>

void func(int age){
    printf("私は%d歳です",age);
}

int main(void){
    int age = 22;
    func(age);
    return 0;
}
