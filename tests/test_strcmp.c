/*
** EPITECH PROJECT, 2023
** B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
** File description:
** test_strcmp
*/

#include "./include/tests.h"

void test_strcmp() {
    printf("Testing strcmp...\n");
    assert(strcmp("hello", "hello") == 0);
    assert(strcmp("hello", "heLlo") > 0);
    assert(strcmp("heLlo", "hello") < 0);
}
