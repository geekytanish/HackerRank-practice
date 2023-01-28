#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int int_num;
    long long_num;
    char char_input;
    float float_num;
    double double_num;
    
    scanf("%d %ld %c %f %lf", &int_num,&long_num,&char_input,&float_num,&double_num);
    printf("%d\n", int_num);
    printf("%ld\n", long_num);
    printf("%c\n", char_input);
    printf("%f\n", float_num);
    printf("%lf\n", double_num);
    
    return 0;
}
