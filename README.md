# libft

My C library:

- Standard libc functions: 
  • memset 
  • bzero
  • memcpy 
  • memccpy 
  • memmove 
  • memchr 
  • memcmp 
  • strlen 
  • strdup 
  • strcpy 
  • strncpy 
  • strcat 
  • strncat 
  • strlcat 
  • strchr 
  • strrchr 
  • strstr 
  • strnstr 
  • strcmp 
  • strncmp 
  • atoi
  • isalpha 
  • isdigit 
  • isalnum 
  • isascii 
  • isprint 
  • toupper 
  • tolower
  • printf 

- Other useful C functions:
  • ft_memalloc (malloc part of a memory and initializet it at 0)
  • ft_memdel (free allocated memory and put a pointer to NULL)
  • ft_strnew (malloc a string and fills it with '\0')
  • ft_strdel (free allocated string memory and put a pointer to NULL)
  • ft_strclr (put all caracters of the string to '\0')
  • ft_striter (apply func f to all characters in the string s)
  • ft_striteri (apply func f to characters in the string s starting from index i)
  • ft_strmap (appy func s to characters in the newly allocated string)
  • ft_strmapi (appy func s to characters in the newly allocated string starting from index i)
  • ft_strequ (lexicographically compare 2 strings)
  • ft_strnequ (lexigraphically compare 2 string till character n)
  • ft_strsub (partially copy a string in a newly allocated string)
  • ft_strjoin (concanate 2 strings and put a result in a newly allocated string)
  • ft_strtrim (trim all spaces in a string)
  • ft_strsplit (cut the string s by character c and put it in newly allocated array)
  • ft_itoa (represent int as string)
  • ft_putchar (write char c on the standard input)
  • ft_putstr (write a string on the standard input)
  • ft_putendl (write a string of the stdin with '\n' in the end)
  • ft_putnbr (write an int on stdin)
  • ft_putchar_fd (write char c to a fd)
  • ft_putstr_fd (write str to a fd)
  • ft_putendl_fd (write a string with '\n' in the end to a fd)
  • ft_putnbr_fd (write an int to a fd)
  • get_next_line (read the content line by line, multiple fd managment)
  
 - List manipulation functions:
  • ft_lstnew (allocate new list node)
  • ft_lstdelone (free list node)
  • ft_lstdel (free all the nodes)
  • ft_lstadd (add new node in the beginning of a list)
  • ft_lstiter (apply func f to each node of a list)
  • ft_lstmap (apply func f to newly allocated node)
  
