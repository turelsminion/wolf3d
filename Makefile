NAME = wolf3d
PATH_SRC = ./
PATH_OBJ = ./
PATH_INC = ./libft/includes/

CC = gcc

HEAD = include/wolf3d.h

SRC =	src/main.c \
		src/read_file.c \
		src/memalloc.c

OBJ = $(patsubst %.c,%.o,$(addprefix $(PATH_SRC), $(SRC)))


all: $(NAME)

$(NAME): $(OBJ) $(HEAD)
	make -C libft/
	$(CC) -I $(PATH_INC) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ) libft/libft.a -lm -L libft/ -L/usr/lib/X11 -lmlx -lXext -lX11

.PHONY: clean fclean

clean:
	make -C libft/ clean
	/bin/rm -f $(OBJ)

fclean: clean
	make -C libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all