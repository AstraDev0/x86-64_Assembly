/*
** EPITECH PROJECT, 2023
** B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
** File description:
** test_strpbrk
*/

#include "./include/tests.h"

void test_strpbrk() {
    printf("Testing strpbrk...\n");
    assert(strpbrk("hello", "lo") == &"hello"[2]);
    assert(strpbrk("hello", "x") == NULL);
}