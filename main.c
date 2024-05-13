#include "ft_printf.h"
#include <stdio.h>
#include <stdint.h>
//uintptr_t

// int main()
// {
//     int i = 16;
//     printf("lki\n");
//     ft_printf("%p\n", &i);
//     printf("%lu\n", (uintptr_t)&i);
// }

// int main()
// {
//     fclose(stdout);
//     int i = ft_printf("lk");
//     int j = printf("lk");
//     fprintf(stderr, "%d %d", i,j);
// }
// int main()
// {
//     printf("   oil  1   ");
//     printf("   oil  2\n");
// }
int main()
{
    float f = 22.0 / 7;
    printf("%.2f\n",f);
}