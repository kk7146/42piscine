Srcs = ft_atoi.c ft_main.c ft_putnbr.c
Objc = ft_atoi.o ft_main.o ft_putnbr.o
Name = do-op

all : $(Name)

$(Name) : $(Objc)
	cc -Wall -Werror -Wextra -o $(Name) $(Objc)

clean:
			rm -f $(Objc)

fclean:		clean
			rm -f $(Name)

re:			fclean all