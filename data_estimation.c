#include <stdio.h>
#include <sys/resource.h>

int main (void)
{
	struct rlimit limit;
	
	getrlimit (RLIMIT_DATA, &limit);

	printf ("\nData Limit = %ld and %ld max\n", limit.rlim_cur, limit.rlim_max); // -1 / -1
	return(0);
}