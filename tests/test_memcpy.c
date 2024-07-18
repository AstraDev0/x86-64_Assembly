/*
** EPITECH PROJECT, 2023
** B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
** File description:
** test_memcpy
*/

#include "./include/tests.h"

void test_memcpy() {
    printf("Testing memcpy...\n");

    char buffer1[100];
    memset(buffer1, 'A', 100);
    char buffer1_copy[100];
    memcpy(buffer1_copy, buffer1, 100);
    for (int i = 0; i < 100; i++)
    {
        assert(buffer1_copy[i] == buffer1[i]);
    }
    char buffer2[100];
    memset(buffer2, 'B', 100);
    char buffer2_copy[100];
    memcpy(buffer2_copy, buffer2, 50);
    for (int i = 0; i < 50; i++)
    {
        assert(buffer2_copy[i] == buffer2[i]);
    }
    char buffer3[100];
    memset(buffer3, 'C', 100);
    memcpy(buffer3 + 50, buffer3, 50);
    for (int i = 0; i < 50; i++)
    {
        assert(buffer3[i + 50] == buffer3[i]);
    }
}