SRCS	= srcs/tool.c srcs/main.c srcs/is_key.c srcs/dataset.c srcs/dict.c srcs/parse_dict.c srcs/read_dict.c srcs/split.c srcs/split_print.c srcs/dict_util.c
OBJS	= $(SRCS:.c=.o)
NAME	= rush-02
INCL	= includes

.c.o :
	cc -c -Wall -Werror -Wextra $< -o $(<:.c=.o) -I $(INCL)

$(NAME) : $(OBJS)
	cc -Wall -Werror -Wextra -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all