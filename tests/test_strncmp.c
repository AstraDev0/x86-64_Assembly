/*
** EPITECH PROJECT, 2023
** B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
** File description:
** test_strncmp
*/

#include "./include/tests.h"

void test_strncmp() {
    printf("Testing strncmp...\n");
    assert(strncmp("hello", "hello", 5) == 0);
    assert(strncmp("hello", "heLlo", 5) > 0);
    assert(strncmp("heLlo", "hello", 5) < 0);
}