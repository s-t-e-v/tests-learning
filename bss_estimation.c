#include <stdio.h>
#include <sys/resource.h>

int main(void)
{
    struct rlimit limit;

    // Get the address space limit (including BSS segment)
    getrlimit(RLIMIT_AS, &limit);

    // Print the address space limit
    printf("\nAddress Space Limit = %ld and %ld max\n", limit.rlim_cur, limit.rlim_max);

    return 0;
}
