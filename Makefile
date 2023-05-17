##
## EPITECH PROJECT, 2022
## makefile
## File description:
## compiler librairie
##

RED = '\033[0;31m'
GREEN = '\033[0;32m'
WHITE = '\033[0;37m'
BLUE = '\033[0;34m'
YELLOW = '\033[0;33m'

SRC		=	    src/main.c \
				src/init.c \
				src/free_destroy.c \
				src/start_screen.c \
				src/init_struct.c \
				src/editing_page.c \
				src/init_button.c \
				src/init_menu.c \
				src/set_menu.c \
				src/set_size_text.c \
				src/init_size.c \
				src/open_all_menu.c \
				src/tool_texture.c \
				src/scale.c \
				src/scale_eraser.c \

OBJ		= 		$(SRC:.c=.o)

NAMEBIN =		my_paint

CFLAGS  = 		-I ./include/ -W -Wall -Wextra -g3

CSFML 	= 		-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

%.o: %.c
		@gcc -c $< -o $@ $(CFLAGS)

$(NAMEBIN):		$(OBJ)
		@echo -e $(BLUE)'         All:'$(WHITE)
		@echo -e $(RED)'['$(YELLOW)'--------------------'$(RED)']'$(WHITE)
		@echo -e $(RED)'  ['$(YELLOW)'BUILDING MY_PAINT'$(RED)']'$(WHITE)
		@gcc $(OBJ) -o $(NAMEBIN) $(CSFML)
		@echo -e $(RED)'       ['$(YELLOW)'FINISH'$(RED)']'$(WHITE)
		@echo -e $(RED)'['$(YELLOW)'--------------------'$(RED)']'$(WHITE)

all:			$(NAMEBIN)

clean:
		@echo -e $(BLUE)'        Clean:'$(WHITE)
		@echo -e $(RED)'['$(YELLOW)'--------------------'$(RED)']'$(WHITE)
		@rm -f $(OBJ)
		@echo -e $(RED)'      ['$(YELLOW)'REMOVE .o'$(RED)']'$(WHITE)
		@echo -e $(RED)'['$(YELLOW)'--------------------'$(RED)']'$(WHITE)

fclean:     clean
		@echo -e $(BLUE)'     Force Clean:'$(WHITE)
		@echo -e $(RED)'['$(YELLOW)'--------------------'$(RED)']'$(WHITE)
		@echo -e $(RED)'   ['$(YELLOW)'REMOVE MY_PAINT'$(RED)']'$(WHITE)
		@rm -f $(NAME)
		@rm -f $(NAMEBIN)
		@echo -e $(RED)'       ['$(YELLOW)'FINISH'$(RED)']'$(WHITE)
		@echo -e $(RED)'['$(YELLOW)'--------------------'$(RED)']'$(WHITE)

re:			fclean all

.PHONY : all clean fclean re
