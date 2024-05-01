
SRCS = 

SRCS_OBJ = $(SRCS:.c=.o)

SRCSALL = $(SRCS) $(BONUS)

OBJSALL = ${SRCSALL:.c=.o} 

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all : ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 

${NAME} : ${SRCS_OBJ}
	ar rc ${NAME} ${SRCS_OBJ} 

bonus: ${OBJSALL}
	ar -rsc ${NAME} ${OBJSALL}

clean :
	rm -f ${OBJSALL}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
