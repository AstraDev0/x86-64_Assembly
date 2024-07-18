/*
** EPITECH PROJECT, 2023
** B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
** File description:
** test_strlen
*/

#include "./include/tests.h"

void test_strlen() {
    printf("Testing strlen...\n");
    assert(strlen("hello") == 5);
    assert(strlen("") == 0);
}