/*
** EPITECH PROJECT, 2023
** B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
** File description:
** test_strchr
*/

#include "./include/tests.h"

void test_strchr() {
    printf("Testing strchr...\n");
    const char* string = "hello, world";
    char c = 'l';

    char* result = strrchr(string, c);
    assert(result != NULL);
    assert(*result == c);

    c = 'z';
    result = strrchr(string, c);
    assert(result == NULL);
    assert(strchr("hello", 'l') == &"hello"[2]);
    assert(strchr("hello", 'x') == NULL);
}