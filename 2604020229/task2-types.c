/*
 * 学号：2604020229
 * 姓名：曹明杰
 * 题目：Homework1 - 题目2 基本数据类型演示
 * 编译：gcc -Wall -std=c11 task2_types.c -o task2_types
 */

#include <stdio.h>

int main(void)
{
    int age = 18;
    float height = 1.80f;
    double pi = 3.141593;
    char bloodType = 'A';
    printf("int age = %d\n", age);
    printf("float height = %f\n", height);
    printf("double pi = %lf\n", pi);
    printf("char bloodType = %c\n", bloodType);
    return 0;
}