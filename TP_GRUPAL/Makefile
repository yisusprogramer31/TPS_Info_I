# Mi Makefile

EXE := programa
SOURCES = main.c funciones.c
OBJS = main.o funciones.o
CFLAGS = -o $(EXE) -lm -Wall 
ARGV :=

all: $(EXE)

programa: $(OBJS)
	gcc $(OBJS) $(CFLAGS)

main.o: main.c

clean: 
	rm -f *.o
	clear

# PARA EJECUTAR #
ejecutar: 
	./$(EXE) $(ARGV)

# PARA COMPROBAR USO DE MEMORIA #
memoria:
	valgrind ./$(EXE) $(ARGV)

# PARA DEBUGGUEAR #
debug:
	gcc -g $(SOURCES) $(CFLAGS)

# PARA ACTUALIZAR EL SISTEMA #
update:
	sudo apt update
	sudo apt upgrade
	sudo apt autoremove
	echo "Todo actualizado!"









