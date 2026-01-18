NAME        = push_swap

SRC_DIR     = src
OPS_DIR     = src/operations
UTILS_DIR   = utils
LIBFT_DIR   = libft42
INCLUDES    = -Iincludes -I$(LIBFT_DIR)

SRCS =  $(wildcard $(SRC_DIR)/*.c) \
        $(wildcard $(OPS_DIR)/*.c) \
        $(wildcard $(UTILS_DIR)/*.c)

OBJS = $(SRCS:.c=.o)

LIBFT = $(LIBFT_DIR)/libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

clean:
	@$(MAKE) clean -C $(LIBFT_DIR)
	@$(RM) $(OBJS)

fclean: clean
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
