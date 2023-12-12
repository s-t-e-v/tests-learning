#include <stdio.h>
#include <sys/resource.h>
size_t top_of_stack;

size_t SizeOfStack()
{
	int x=0;
	return top_of_stack - (size_t) &x;
}

void do_something_very_recursive(int depth) {
	int localVariable;

	printf("Depth: %d\n", depth);
	if (depth < 260000)
		do_something_very_recursive(depth + 1);
	else
		;
}

int main (void)
{
	struct rlimit limit;
	int x=0;
	top_of_stack = (size_t) &x;

	getrlimit (RLIMIT_STACK, &limit);

	do_something_very_recursive(x);
	printf("\nSize of stack %ld\n", SizeOfStack()); // 24

	printf ("\nStack Limit = %ld and %ld max\n", limit.rlim_cur, limit.rlim_max); // 8388608 / -1
	return(0);
}
