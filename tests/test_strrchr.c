/*
** EPITECH PROJECT, 2023
** B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
** File description:
** test_strrchr
*/

#include "./include/tests.h"

void test_strrchr() {
    printf("Testing strrchr...\n");
    assert(strrchr("hello", 'l') == &"hello"[3]);
    assert(strrchr("hello", 'x') == NULL);
}