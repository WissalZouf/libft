
 #include "libft.h"

 void *ft_memcpy(void *dest, const void *src, size_t n)
 {
     unsigned char *d;
     unsigned char *s;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    
    if (!dest && !src )
      return (NULL);

    while (n--)
    {
       *(d++) = *(s++);
    }
    return dest;
 }


//  int main()
//  {
//     char str[19] = "This is an example";
//     char s[19] = "This is an example";
//     char *ptr;
//     char *p;

//      ptr = memcpy(str + 7, str, 10);
//      p = ft_memcpy(s + 7, s, 10);
//      printf("%s ===== %s .\n", ptr, p);
// }
