NAME		=	libftprintf.a
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
SRCS		=	ft_printf.c ft_printf_execute_types_1.c \
				ft_printf_execute_types_2.c ft_printf_utils1.c \
				ft_printf_utils2.c ft_printf_utils3.c
OBJS		=	$(SRCS:.c=.o)
LIBFT_PATH	=	./libft
LIBFT		=	$(LIBFT_PATH)/libft.a

%.o:			%.c
					@$(CC) $(CFLAGS) -c $< -o $@
					
all:			$(NAME)

$(NAME):		$(LIBFT) $(OBJS)
				@cp	$(LIBFT) $(NAME)
					@ar -rcs $(NAME) $(OBJS)
					@echo "Compilation of ft_printf successful!"

$(LIBFT):		
					@make -C $(LIBFT_PATH) all

clean:			
					@make -C $(LIBFT_PATH) clean
					@rm -f $(OBJS)
					@echo "...cleaning..."

fclean:			clean
					@make -C $(LIBFT_PATH) fclean
					@rm -f $(NAME)
					@echo "...still cleaning..."

re:				fclean all

.PHONY:			all clean fclean re libft
