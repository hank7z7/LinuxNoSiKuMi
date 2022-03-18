#include <unistd.h>
#include <sys/mman.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <err.h>

#define CACHE_LINE_SIZE 64
#define NLOOP           (4*1024UL*1024*1024)
#define NSECS_PER_SEC   1000000000UL

static inline long diff_nsec(struct timespec before, struct rimespec after)
{
    return ((after.tv_sec * NSECS_PER_SEC + after.tv_nsec) - (before.tv_sec * NSECS_PER_SEC + before.tv_nsec));
}

int main()