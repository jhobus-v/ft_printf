/*#include "libftprintf.h"

int main()
{
    char *str = "123";
    int number = 42;
    unsigned int unsigned_number = 123456;
    void *ptr = malloc(1); // Allocate a small block of memory for pointer testing

	printf("value of printf mine:%i\n", ft_printf("hi!:%%"));
	printf("value of printf original:%i\n", printf("hi!:%%"));

    // Test %c
    ft_printf("Character: %c\n", 'P');
	printf("Character original: %c\n", 'P');

    // Test %s
    ft_printf("String: %s\n", str);
	printf("String original: %s\n", str);

    // Test %d and %i
    ft_printf("Integer (signed)d: %d\n", number);
    ft_printf("Integer (signed)i: %i\n", number);
	printf("Integer (signed) originald : %d\n", number);
    printf("Integer (signed) originali: %i\n", number);

    // Test %u
    ft_printf("Unsigned integer: %u\n", unsigned_number);
	printf("Unsigned integer original: %u\n", unsigned_number);

    // Test %x (lowercase hexadecimal)
    ft_printf("Hexadecimal (lowercase): %x\n", unsigned_number);
	printf("Hexadecimal (lowercase)original: %x\n", unsigned_number);

    // Test %X (uppercase hexadecimal)
    ft_printf("Hexadecimal (uppercase): %X\n", unsigned_number);
	printf("Hexadecimal (uppercase)original: %X\n", unsigned_number);

    // Test %p (pointer address)
    ft_printf("Pointer address: %p\n", ptr);
	printf("Pointer address original: %p\n", ptr);

    // Test % with no format specifier
    ft_printf("Percentage sign: %%\n");
	printf("Percentage sign original: %%\n");

    // Free allocated memory
    free(ptr);

    return 0;
}*/
