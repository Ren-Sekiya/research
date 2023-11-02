#include <stdio.h>
  
struct person1 {
    char *name;
    int age;
};

typedef struct person {
    char *name;
    int age;
} person2;

int main(void) {
  struct person2 tanaka;
    tanaka.name = "T.Tanaka";
    tanaka.age = 30;
 
    return 0;
}
