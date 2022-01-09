NAME = Magic_clone
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++17

SRCS_DIR = sources
SRCS_SUB_DIRS = "cards" "cards/creatures" "cards/lands" "players" "utils"
INCS = -Isources
OBJS_DIR = objects

SRC_FILES := $(wildcard $(SRCS_DIR)/*.cpp) $(wildcard $(SRCS_DIR)/*/*.cpp) $(wildcard $(SRCS_DIR)/*/*/*.cpp) $(wildcard $(SRCS_DIR)/*/*/*/*.cpp)
OBJ_FILES := $(patsubst $(SRCS_DIR)/%.cpp, $(OBJS_DIR)/%.o, $(SRC_FILES))

BOLD = \e[1m
GREEN = \e[92m
BLUE = \e[96m
RED = \e[91m
RESET = \e[0m

.PHONY: all clean re

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@echo "$(BLUE)$(BOLD)[Makefile]$(RESET) $(BLUE)Building $(BOLD)$(NAME)$(RESET)"
	@$(CC) $(CFLAGS) $(INCS) -o $@ $^

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@mkdir -p "$(OBJS_DIR)"
	@cd "$(OBJS_DIR)" ; mkdir -p $(SRCS_SUB_DIRS)
	@echo "$(GREEN)$(BOLD)[Makefile]$(RESET) $(GREEN)Compiling $(BOLD)$(notdir $<)$(RESET)"
	@$(CC) $(CFLAGS) $(INCS) -c -o $@ $<

clean:
	@echo "$(RED)$(BOLD)[Makefile]$(RESET) $(RED)Deleting $(BOLD)binaries$(RESET)"
	@rm -rf $(OBJS_DIR)
	@echo "$(RED)$(BOLD)[Makefile]$(RESET) $(RED)Deleting $(BOLD)$(NAME)$(RESET)"
	@rm -rf $(NAME)

re: clean all