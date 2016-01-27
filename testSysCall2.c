#include <stdio.h>
#include <stdlib.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main() {
	int *ptr;
	ptr = (int*)malloc(sizeof(int));
	int result = syscall(324, 3, 5, ptr);
        printf("Simple_add exited with value %d and result was: %d \n", result, *ptr);
	free(ptr);
        return 0;
}

