# Libft

## Standard libc functions:  <br />
  * **ft_memset**
  * **ft_bzero**
  * **ft_memcpy**
  * **ft_memccpy**
  * **ft_memmove**
  * **ft_memchr**
  * **ft_memcmp**
  * **ft_strlen**
  * **ft_strdup**
  * **ft_strcpy**
  * **ft_strncpy**
  * **ft_strcat**
  * **ft_strncat**
  * **ft_strlcat**
  * **ft_strchr**
  * **ft_strrchr**
  * **ft_strstr**
  * **ft_strnstr**
  * **ft_strcmp**
  * **ft_strncmp**
  * **ft_atoi**
  * **ft_isalpha**
  * **ft_isdigit**
  * **ft_isalnum**
  * **ft_isascii**
  * **ft_isprint**
  * **ft_toupper**
  * **ft_tolower**
  * **ft_printf**

## Other useful C functions:
| function's name | function's action |
-----------|--------|
|**ft_memalloc** | *malloc part of a memory and initializet it at 0* |
|**ft_memdel** | *free allocated memory and put a pointer to NULL* |
|**ft_strnew** | *malloc a string and fills it with '\0'* |
|**ft_strdel** | *free allocated string memory and put a pointer to NULL*|
|**ft_strclr** | *put all caracters of the string to '\0'*|
|**ft_striter** | *apply func f to all characters in the string s*|
|**ft_striteri** | *apply func f to characters in the string s starting from index i*|
|**ft_strmap** | *appy func s to characters in the newly allocated string*|
|**ft_strmapi** | *appy func s to characters in the newly allocated string starting from index i*|
|**ft_strequ** | *lexicographically compare 2 strings*|
|**ft_strnequ** | *lexigraphically compare 2 string till character n*|
|**ft_strsub** | *partially copy a string in a newly allocated string*|
|**ft_strjoin** | *concanate 2 strings and put a result in a newly allocated string*|
|**ft_strtrim** | *trim all spaces in a string*|
|**ft_strsplit** | *cut the string s by character c and put it in newly allocated array*|
|**ft_itoa** | *represent int as string*|
|**ft_putchar** | *write char c on the standard input*|
|**ft_putstr** | *write a string on the standard input*|
|**ft_putendl** | *write a string of the stdin with '\n' in the end*|
|**ft_putnbr** | *write an int on stdin*|
|**ft_putchar_fd** | *write char c to a fd*|
|**ft_putstr_fd** | *write str to a fd*|
|**ft_putendl_fd** | *write a string with '\n' in the end to a fd*|
|**ft_putnbr_fd** | *write an int to a fd*|
|**get_next_line** | *read the content line by line, multiple fd managment*|
|**ft_malloc_error** |*print line and file of an memory allocation*|
  
## List manipulation functions:
| function's name | function's action |
-----------|--------|
|**ft_lstnew** | *allocate new list node* |
|**ft_lstdelone** | *free list node* |
|**ft_lstdel** | *free all the nodes* |
|**ft_lstadd** | *add new node in the beginning of a list*|
|**ft_lstiter** | *apply func f to each node of a list*|
|**ft_lstmap** | *apply func f to newly allocated node*|
|**ft_doublelink_add** | *add new node in the end in doubly linked list*|
|**ft_doublelink_add_head** | *add new node in the head of doubly linked list*|
|**ft_doublelink_tail** | *add new node in the tail of doubly linked list*| 
|**ft_doublelink_creat** | *allocate new node in doubly linked list*|
|**ft_doublelink_del** | *free all nodes in double linked list*|
