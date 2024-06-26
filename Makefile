# CC		= gcc
# CFLAGS	= -Wall -Werror -Wextra -g3
# NAME	= push_swap
# NAMEE	= checker

# SRC_PATH = src/
# OBJ_PATH = obj/
# SRC_BONUS_PATH = bonus/

# SRC		= main.c \
# 		check_input.c push_swap_utils.c \
# 		initializing.c \
# 		stack.c \
# 		swap.c push.c rotate.c reverse_rotate.c \
# 		sort_tiny.c sort.c \
# 		get_position.c calculate_cost.c do_move.c \
# 		spliting_utils.c \
# 		ft_error_handler.c \
# 		push_swap.c \
# 		helpers.c

# SRCS_BONUS = actions.c \
# 		checker.c \
# 		while.c \
# 		reading.c
# SRCS		= $(addprefix $(SRC_PATH), $(SRC))
# SRCS_BONUS	= $(addprefix $(SRC_BONUS_PATH), $(SRC))
# OBJ			= $(SRC:.c=.o)
# OBJ_BONUS	= $(SRCS_BONUS:.c=.o)
# OBJS		= $(addprefix $(OBJ_PATH), $(OBJ))
# OBJS_BONUS	= $(addprefix $(SRC_BONUS_PATH), $(OBJ))
# INCS		= -I ./includes/

# all: $(OBJ_PATH) $(NAME) 

# $(OBJ_PATH)%.o: $(SRC_PATH)%.c
# 	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

# $(OBJ_BONUS_PATH)%.o: $(SRC_BONUS_PATH)%.c
# 	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

# $(OBJ_PATH):
# 	mkdir $(OBJ_PATH)

# $(NAME): $(OBJS)
# 	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# $(NAMEE): $(OBJS_BONUS)
# 	$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(NAMEE)

# clean:
# 	rm -rf $(OBJ_PATH)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all clean fclean re

NAME = push_swap
NAME_BONUS = checker

BONUS = reading.c while.c checker.c actions.c
SRC = main.c \
	check_input.c push_swap_utils.c \
	initializing.c \
	stack.c \
	swap.c push.c rotate.c reverse_rotate.c \
	sort_tiny.c sort.c \
	get_position.c calculate_cost.c do_move.c \
	spliting_utils.c \
	ft_error_handler.c \
	push_swap.c \
	helpers.c

# Updated paths for header and source files
HEADER_PATH = i/
SRC_PATH = src/
BONUS_PATH = bonus/
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ_PATH = obj/

# Generate object file names from source file names
OBJ = $(SRC:%.c=$(OBJ_PATH)%.o)
OBJ_BONUS = $(BONUS:%.c=$(OBJ_PATH)%.o)

# Main target for push_swap
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@
	@echo "Mandatory Part: Compilation done."

# Bonus target for checker
$(NAME_BONUS): $(OBJ_BONUS)
	$(CC) $(CFLAGS) $^ -o $@
	@echo "Bonus Part: Compilation done."

# Rule to compile source files into object files
$(OBJ_PATH)%.o: $(SRC_PATH)%.c | directories
	$(CC) $(CFLAGS) -I$(HEADER_PATH) -c $< -o $@

# Rule to compile bonus source files into object files
$(OBJ_PATH)%.o: $(BONUS_PATH)%.c | directories
	$(CC) $(CFLAGS) -I$(HEADER_PATH) -c $< -o $@

# Ensure 'all' depends on 'directories' and 'push_swap'
all: directories $(NAME)

# Ensure 'bonus' depends on 'directories' and 'checker'
bonus: directories $(NAME_BONUS)

# Create obj directory
directories:
	mkdir -p $(OBJ_PATH)

# Cleaning rules
clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all clean fclean re directories bonus


