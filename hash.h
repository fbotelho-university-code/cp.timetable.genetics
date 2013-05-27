#ifndef MURMURHASH2_C
#define MURMURHASH2_C

#define     MURMURHASH2_DIGEST_LENGTH   4

/*
 * -----------------------------------------------------------------------------
 * MurmurHash2, by Austin Appleby

 * Note - This code makes a few assumptions about how your machine behaves -

 * 1. We can read a 4-byte value from any address without crashing
 * 2. sizeof(int) == 4

 * And it has a few limitations -

 * 1. It will not work incrementally.
 * 2. It will not produce the same results on little-endian and big-endian
 *    machines.
 */
unsigned int MurmurHash2 ( const void * key, int len, unsigned int seed );


#endif
