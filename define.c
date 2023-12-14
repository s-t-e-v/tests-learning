#include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# elif BUFFER_SIZE > 0 && 200000000 / BUFFER_SIZE < 1
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 200000000
# endif

# define BF_SIZE BUFFER_SIZE

# if BF_SIZE <= 0
#  undef BF_SIZE
#  define BF_SIZE 1
# endif

# define FD_OPEN_MAX 200000000 / BF_SIZE

# if FD_OPEN_MAX > 8192
#  undef FD_OPEN_MAX
#  define FD_OPEN_MAX 8192
# endif

int main(void)
{
    printf("BUFFER_SIZE: %d\n", BUFFER_SIZE);
    printf("FD_OPEN_MAX: %d\n", FD_OPEN_MAX);
    printf("BF_SIZE: %d\n", BF_SIZE);
    return (0);
}