# SRC =		main.c \
# 			ft_strlen.c \
# 			ft_isalpha.c \
# 			ft_isdigit.c \
# 			ft_isalnum.c \
# 			ft_isascii.c \
# 			ft_isprint.c \
# 			ft_memcpy.c \
# 			ft_memset.c \
# 			ft_bzero.c\
# 			ft_strlcpy.c\
#			ft_strchr.c\
#           ft_toupper.c\


# HEADER =	./libft.h \

# FLAGS = -Wall -Wextra -Werror

# NAME = libft

# OBJ = $(SRC:.c=.o)


# all: $(NAME)

# $(NAME): $(OBJ) $(HEADER)
# 	@gcc $(FLAGS) -o $(NAME) $(OBJ)
# %.o: %.c
# 	@printf "\033[0;33mGenerating libft objects... %-33.33s\r" $@
# 	@gcc ${FLAGS} -c $< -o $@

# norm :
# 	@norminette $(SRC) $(HEADER)

# clean:
# 	@echo "\nRemoving binaries..."
# 	@rm -f $(OBJ)
# 	@echo "\033[0m"

# fclean:
# 	@echo "\nDeleting objects..."
# 	@rm -f $(OBJ)
# 	@echo "\nDeleting executable..."
# 	@rm -f $(NAME)
# 	@echo "\033[0m"

# re: fclean all


SRCS =		ft_strlen.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_bzero.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_atoi.c\
			ft_strnstr.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putnbr_fd.c\
			ft_split.c \
			ft_strjoin.c \
			ft_substr.c \
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putendl_fd.c\
			ft_lstnew.c\
			ft_lstadd_front.c\
			ft_memmove.c\
			ft_strchr.c\
			ft_lstadd_back.c\
			ft_lstlast.c\
			ft_lstsize.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_strtrim.c\

SRCSB =	

NAME = libft.a

OBJECT = $(SRCS:.c=.o)

OBJECTB = $(SRCSB:.c=.o)

HEADER =	./libft.h

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJECT) $(HEADER)
			ar -rcs $(NAME) $(OBJECT)

bonus : all $(OBJECTB)
			ar -rcs $(NAME) $(OBJECTB)

%.o : %.c
			gcc $(FLAGS) -c $<

clean :
			rm -rf $(OBJECT)
			rm -rf $(OBJECTB)

fclean : clean
			rm -rf $(NAME)

re : fclean all