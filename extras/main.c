
#include "libft.h"
#include <stdio.h> // For output during testing



int	main(void)
{
	// Testing ft_isalpha
	printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
	printf("ft_isalpha('1'): %d\n", ft_isalpha('1'));

	// Testing ft_isdigit
	printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
	printf("ft_isdigit('A'): %d\n", ft_isdigit('A'));

	// Testing ft_isalnum
	printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));
	printf("ft_isalnum('5'): %d\n", ft_isalnum('5'));
	printf("ft_isalnum('@'): %d\n", ft_isalnum('@'));

	// Testing ft_isascii
	printf("ft_isascii(65): %d\n", ft_isascii(65));
	printf("ft_isascii(200): %d\n", ft_isascii(200));

	// Testing ft_isprint
	printf("ft_isprint(' '): %d\n", ft_isprint(' '));
	printf("ft_isprint('\\n'): %d\n", ft_isprint('\n'));

	// Testing ft_strlen
	printf("ft_strlen(\"Hello\"): %zu\n", ft_strlen("Hello"));

	// Testing ft_memset
	char buffer[10] = {0};
	ft_memset(buffer, 'A', 5);
	printf("ft_memset: %s\n", buffer);

	// Testing ft_bzero
	char bzero_buffer[10] = "ABCDEFG";
	ft_bzero(bzero_buffer, 3);
	printf("ft_bzero: %s\n", &bzero_buffer[3]);

	// Testing ft_memcpy
	char src[] = "Source";
	char dest[10];
	ft_memcpy(dest, src, 7);
	printf("ft_memcpy: %s\n", dest);

	// Testing ft_memmove
	char overlap[] = "12345";
	ft_memmove(overlap + 1, overlap, 5);
	printf("ft_memmove: %s\n", overlap);

	// Testing ft_strlcpy
	char lcpy_dest[10];
	size_t lcpy_len = ft_strlcpy(lcpy_dest, "Hello", 10);
	printf("ft_strlcpy: %s (len: %zu)\n", lcpy_dest, lcpy_len);

	// Testing ft_strlcat
	char lcat_dest[15] = "Hello";
	size_t lcat_len = ft_strlcat(lcat_dest, " World", 15);
	printf("ft_strlcat: %s (len: %zu)\n", lcat_dest, lcat_len);

	// Testing ft_toupper and ft_tolower
	printf("ft_toupper('a'): %c\n", ft_toupper('a'));
	printf("ft_tolower('A'): %c\n", ft_tolower('A'));

	// Testing ft_strchr and ft_strrchr
	printf("ft_strchr(\"Hello\", 'e'): %s\n", ft_strchr("Hello", 'e'));
	printf("ft_strrchr(\"Hello\", 'l'): %s\n", ft_strrchr("Hello", 'l'));

	// Testing ft_strncmp
	printf("ft_strncmp(\"Hello\", \"Helium\", 3): %d\n", ft_strncmp("Hello", "Helium", 3));

	// Testing ft_memchr
	printf("ft_memchr(\"abcdef\", 'd', 6): %s\n", (char *)ft_memchr("abcdef", 'd', 6));

	// Testing ft_memcmp
	printf("ft_memcmp(\"abc\", \"abd\", 3): %d\n", ft_memcmp("abc", "abd", 3));

	// Testing ft_strnstr
	printf("ft_strnstr(\"Hello World\", \"World\", 11): %s\n", ft_strnstr("Hello World", "World", 11));

	// Testing ft_atoi
	printf("ft_atoi(\"1234\"): %d\n", ft_atoi("1234"));

	// Testing ft_strdup
	char *dup = ft_strdup("Duplicate me!");
	printf("ft_strdup: %s\n", dup);
	free(dup);

	// Testing ft_calloc
	char *calloc_ptr = (char *)ft_calloc(10, sizeof(char));
	if (calloc_ptr)
	{
		printf("ft_calloc: Memory allocated and initialized to 0\n");
		free(calloc_ptr);
	}

	// Testing ft_itoa
	char *itoa_str = ft_itoa(42);
	printf("ft_itoa: %s\n", itoa_str);
	free(itoa_str);

	// Testing ft_substr
	char *substr = ft_substr("Hello World", 6, 5);
	printf("ft_substr: %s\n", substr);
	free(substr);

	// Testing ft_split
	char **split = ft_split("Hello,42,World", ',');
	for (int i = 0; split[i]; i++)
	{
		printf("ft_split[%d]: %s\n", i, split[i]);
		free(split[i]);
	}
	free(split);

	// Testing ft_strjoin
	char *joined = ft_strjoin("Hello, ", "World!");
	printf("ft_strjoin: %s\n", joined);
	free(joined);

	// Testing ft_strtrim
	char *trimmed = ft_strtrim("   Hello World   ", " ");
	printf("ft_strtrim: %s\n", trimmed);
	free(trimmed);


	// Testing ft_putstr_fd
	ft_putstr_fd("Hello to fd 1\n", 1);

	// Testing ft_putchar_fd
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);

	// Testing ft_putendl_fd
	ft_putendl_fd("Hello with newline", 1);

	// Testing ft_putnbr_fd
 	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);

	return (0);
}
