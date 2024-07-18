/*
** EPITECH PROJECT, 2023
** B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
** File description:
** test_strcspn
*/

#include "./include/tests.h"

void test_strcspn() {
    printf("Testing strcspn...\n");
    assert(strcspn("hello", "l") == 2);
    assert(strcspn("hello", "he") == 0);
}
