/*
** EPITECH PROJECT, 2023
** B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
** File description:
** test_memmove
*/

#include "./include/tests.h"

void test_memmove() {
    printf("Testing memmove...\n");

    char buffer1[100];
    memset(buffer1, 'A', 100);
    memmove(buffer1 + 10, buffer1, 10);
    for (int i = 0; i < 10; i++)
    {
        assert(buffer1[i] == 'A');
    }
    for (int i = 10; i < 20; i++)
    {
        assert(buffer1[i] == 'A');
    }
    for (int i = 20; i < 100; i++)
    {
        assert(buffer1[i] == 'A');
    }

    char buffer2[100];
    memset(buffer2, 'A', 100);
    memmove(buffer2, buffer2 + 10, 10);
    for (int i = 0; i < 10; i++)
    {
        assert(buffer2[i] == 'A');
    }
    for (int i = 10; i < 20; i++)
    {
        assert(buffer2[i] == 'A');
    }
    for (int i = 20; i < 100; i++)
    {
        assert(buffer2[i] == 'A');
    }

    char buffer3[100];
    memset(buffer3, 'A', 100);
    memmove(buffer3 + 20, buffer3 + 10, 10);
    for (int i = 0; i < 10; i++)
    {
        assert(buffer3[i] == 'A');
    }
    for (int i = 10; i < 20; i++)
    {
        assert(buffer3[i] == 'A');
    }
    for (int i = 20; i < 30; i++)
    {
        assert(buffer3[i] == 'A');
    }
    for (int i = 30; i < 100; i++)
    {
        assert(buffer3[i] == 'A');
    }
}
