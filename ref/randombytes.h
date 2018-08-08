#ifndef RANDOMBYTES_H
#define RANDOMBYTES_H

#define _GNU_SOURCE

#if(_WIN32)
#include <stdint.h>
#else
#include <unistd.h>
#endif

void randombytes(unsigned char *x, size_t xlen);

#endif
