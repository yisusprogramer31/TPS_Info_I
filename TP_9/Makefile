################################################################
# INFORMACION DEL AUTOR                                        #
################################################################

AUTHOR   = "JesusMariaMaresca"
CLASS    = "R1042"
EXERCISE = "1_5"
YEAR     = "2021"

################################################################
# SOURCES, HEADERS, OBJECTOS, BIBLIOTECAS Y EJECUTABLES        #
################################################################

SRC_DIR   = src
BUILD_DIR = build
BIN_DIR   = bin

SOURCES = $(shell find $(SRC_DIR) -name '*.c')
HEADERS = $(shell find $(SRC_DIR) -name '*.h')
OBJS    = $(patsubst %.c, $(BUILD_DIR)/%.o, $(SOURCES))
EXEC    = app

################################################################
# COMPILADOR Y ARGUMENTOS                                      #
################################################################

CC           = gcc
CFLAGS       = -c -Wall
EXTRA_CFLAGS =
LDFLAGS      = -lm

ifdef DEBUG
  EXTRA_CFLAGS += -g -O0 -DDEBUG
endif

################################################################
# INFORMACION DEL ARCHIVO TAR                                  #
################################################################

FILE_NAME = $(AUTHOR)-$(CLASS)-$(EXERCISE)-$(YEAR).tar.gz

################################################################
# EDITOR DE TEXTO                                              #
################################################################

TEXT_EDITOR = code

################################################################
# DOCUMENTACION                                                #
################################################################

DOC_GEN  = doxygen
DOC_FILE = Doxyfile
DOC_DIR  = doc

################################################################
# TARGETS                                                      #
################################################################

.PHONY: all clean pkg edit doc help

## all:   Compila y linkea la aplicacion
all: $(EXEC)

$(EXEC): $(OBJS)
	@echo '[LD] Linking C executable $@'
	@mkdir -p $(BIN_DIR)
	$(CC) $(OBJS) $(LDFLAGS) -o $(BIN_DIR)/$@
	@echo 'Built target $@'

$(BUILD_DIR)/%.o: %.c Makefile
	@echo '[CC] Compiling C object $@'
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(EXTRA_CFLAGS) $< -o $@

## clean: Elimina los archivos objecto y el archivo ejecutable
clean:
	@echo '[RM] Cleaning workspace'
	rm -rf $(BUILD_DIR) $(BIN_DIR) $(DOC_DIR)

## pkg:   Genera el archivo .tar.gz
pkg:
	@echo '[TAR] Packing workspace'
	tar -zcvf $(FILE_NAME) $(SRC_DIR) Makefile $(DOC_FILE)

## edit:  Abre el editor de texto
edit:
	@echo '[ED] Editing workspace'
	$(TEXT_EDITOR) .

## doc:   Genera la documentacion
doc:
	@echo '[DOC] Generating documentation'
	@mkdir -p $(DOC_DIR)
	$(DOC_GEN) $(DOC_FILE)

## help:  Muestra la ayuda
help:
	@sed -n 's/^## //p' Makefile

