/*
** EPITECH PROJECT, 2023
** B-ASM-400-BER-4-1-asmminilibc-matthis.brocheton
** File description:
** include
*/

#ifndef INCLUDE_H_
    #define INCLUDE_H_
#include <stdio.h>
#include <assert.h>
size_t strlen(const char *s);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
int strcmp(const char *s1, const char *s2);
void *memmove(void *dest, const void *src, size_t n);
int strncmp(const char *s1, const char *s2, size_t n);
int strcasecmp(const char *s1, const char *s2);
char *strstr(const char *haystack, const char *needle);
char *strpbrk(const char *s, const char *accept);
size_t strcspn(const char *s, const char *reject);
void test_strlen(void);
void test_strchr(void);
void test_strrchr(void);
void test_memset(void);
void test_memcpy(void);
void test_strcmp(void);
void test_memmove(void);
void test_strncmp(void);
void test_strcasecmp(void);
void test_strstr(void);
void test_strpbrk(void);
void test_strcspn(void);

#endif /* !INCLUDE_H_ */
