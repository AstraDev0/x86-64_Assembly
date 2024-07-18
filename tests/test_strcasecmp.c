/*
** EPITECH PROJECT, 2023
** B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
** File description:
** test_strcasecmp
*/

#include "./include/tests.h"

void test_strcasecmp() {
    printf("Testing strcasecmp...\n");
    char string1[] = "Hello World";
    char string2[] = "Hello World";
    int result = strcasecmp(string1, string2);
    assert(result == 0);

    char string3[] = "HELLO WORLD";
    char string4[] = "hello world";
    result = strcasecmp(string3, string4);
    assert(result == 0);

    char string5[] = "hello world";
    char string6[] = "HELLO WORLD";
    result = strcasecmp(string5, string6);
    assert(result == 0);

    char string7[] = "Hello World";
    char string8[] = "hello woRld";
    result = strcasecmp(string7, string8);
    assert(result == 0);

    char string9[] = "Hello World s";
    char string10[] = "hello woRld";
    result = strcasecmp(string9, string10);
    assert(result == 32);

    char string11[] = "Hello World";
    char string12[] = "hello woRld s";
    result = strcasecmp(string11, string12);
    assert(result < 0);

    char string13[] = "Hello World f";
    char string14[] = "hello woRld s";
    result = strcasecmp(string13, string14);
    assert(result > 0);
}

