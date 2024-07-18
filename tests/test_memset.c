/*
** EPITECH PROJECT, 2023
** B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
** File description:
** test_memset
*/

#include "./include/tests.h"

void test_memset() {
    printf("Testing memset...\n");
    char buffer1[100];
    memset(buffer1, 'A', 100);
    for (int i = 0; i < 100; i++)
    {
        assert(buffer1[i] == 'A');
    }
    char buffer2[100];
    memset(buffer2, 'B', 50);
    for (int i = 0; i < 50; i++)
    {
        assert(buffer2[i] == 'B');
    }
    char buffer3[100];
    memset(buffer3, 0, 100);
    for (int i = 0; i < 100; i++)
    {
        assert(buffer3[i] == 0);
    }
}