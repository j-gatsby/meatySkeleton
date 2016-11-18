  GNU nano 2.2.6           File: kernel/kernel/kernel.c                    Modified  
#include <stdio.h>
#include <kernel/tty.h>

void kernel_main(void)
{
    terminal_initialize();
    printf("Hello, kernel world!\n");
}
