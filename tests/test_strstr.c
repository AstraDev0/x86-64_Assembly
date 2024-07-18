/*
** EPITECH PROJECT, 2023
** B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
** File description:
** test_strstr
*/

#include "./include/tests.h"

void test_strstr() {
    printf("Testing strstr...\n");
    assert(strstr("hello", "ll") == &"hello"[2]);
    assert(strstr("hello", "x") == NULL);
}