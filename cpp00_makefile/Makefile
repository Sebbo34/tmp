NAME		:= 

SRCS		:=
OBJS		:= $(SRCS:.c=.o)

SRCS		:= $(addprefix src/,$(SRCS))
OBJS		:= $(addprefix build/,$(OBJS))

CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror
CPPFLAGS	:= -I

all: $(NAME)

build/%.o: sources/%.c
	mkdir -p build
	$(CC) -c $< -o $@ $(CFLAGS) $(CPPFLAGS)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	rm -rf build

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
