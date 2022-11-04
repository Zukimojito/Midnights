##
## ETNA PROJECT, 28/10/2022 by f
## /home/Grisou/delivery/ETNA/rpgc
## File description:
##      Makefile
##

NAME		=	my_rpg

TESTS		=	unit_test

INC			=	-I./include -I../include

LIB			=	-L../lib/my -lmy

CFLAGS 		=	-Wall -Wextra -Werror $(INC)

#CPPFLAG	=	$(INC)

SRC_DIR		=	src/

INIT_DIR	=	$(SRC_DIR)init/

LIB_DIR		=	../lib/my

TESTS_DIR	=	tests/

OBJ		=	$(SRC:.c=.o)

SRC		=	$(SRC_DIR)main.c			\
			$(INIT_DIR)init_boss.c		\
			$(INIT_DIR)init_enemy.c		\
			$(INIT_DIR)init_player.c	\
			${SRC_DIR}my_rpg.c			\
			$(SRC_DIR)displayMenu.c		\
			$(SRC_DIR)display.c			\
			$(SRC_DIR)selectPlayer.c	\
			${SRC_DIR}choice.c			\
			${SRC_DIR}progression.c		\
			${SRC_DIR}game_loop.c		\
			${SRC_DIR}action.c			\
			${SRC_DIR}mob.c				\
			${SRC_DIR}generate.c		\

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C $(LIB_DIR)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

db:     CFLAGS += -g3
db:		$(OBJ)
	$(MAKE) -C $(LIB_DIR)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	$(MAKE) -C $(LIB_DIR) clean
	$(RM) $(OBJ) *gc*

fclean:	clean
	$(MAKE) -C $(LIB_DIR) fclean
	$(RM) $(NAME)

re:	fclean all

redb:   fclean db

.PHONY:         all run_tests fclean re db redb
