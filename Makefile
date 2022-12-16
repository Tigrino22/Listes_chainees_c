SRC_DIR = src
BUILD_DIR = build/debug
CC = gcc
SRC_FILES = $(SRC_DIR)/*.c
OBJ_NAME = play
INCLUDE_PATHS = -Iinclude
LIBRARY_PATHS = -Llib
COMPILER_FLAGS = -Wall -Wextra
LINKER_FLAGS = -lsdl2

all:
	$(CC) $(COMPILER_FLAGS) $(INCLUDE_PATHS) $(SRC_FILES) -o $(BUILD_DIR)/$(OBJ_NAME)
