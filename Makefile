# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 20:29:24 by kofujita          #+#    #+#              #
#    Updated: 2024/09/07 11:47:44 by kofujita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := ft_std.a
INCLUDE_DIR := 
CFLAGS      := -Wall -Wextra -Werror

SRCS		:= ./srcs/atoi.c
			   ./srcs/find.c
			   ./srcs/length.c
			   ./srcs/next_no_whitespace.c

OBJS_DIR	:= objs
OBJS		:= $(SRCS:%.c=$(OBJS_DIR)/%.o)

AR			:= ar rcs
CC          := cc
RM          := rm -rf
CP          := cp -r
MKDIR       := mkdir -p

INSTALL_DIR := /usr/local

# Progress bar information
SRCS_COUNT := $(words $(SRCS))
PROGRESS := 0
BAR_LENGTH := 40

.PHONY :
	all clean fclean re install

$(OBJS_DIR)/%.o: %.c
	@$(MKDIR) $(OBJS_DIR) $(OBJS_DIR)/srcs
	@$(CC) $(CFLAGS) $(INCLUDE_DIR) -o $@ -c $<
	@$(eval PROGRESS=$(shell echo $$(($(PROGRESS) + 1))))
	@PERCENTAGE=$$(($(PROGRESS) * 100 / $(SRCS_COUNT))) ; \
	BAR=$$(($(BAR_LENGTH) * $$PERCENTAGE / 100)) ; \
	SPACES=$$(($(BAR_LENGTH) - $$BAR)) ; \
	printf "\r\033[K" ; \
	printf "Progress: [" ; \
	for i in $$(seq 1 $$BAR); do printf "="; done ; \
	printf ">" ; \
	for i in $$(seq 1 $$SPACES); do printf " "; done ; \
	printf "] $$PERCENTAGE%% ($@)"

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo Created $(NAME)

all : $(NAME)

clean :
	@$(RM) $(OBJS_DIR)
	@echo Deleted OBJS

fclean : clean
	@$(RM) $(NAME)
	@echo Deleted $(NAME)

re : fclean all

install : all
	@$(CP) $(NAME) $(INSTALL_DIR)/lib
	@$(CP) t_string.h $(INSTALL_DIR)/include
