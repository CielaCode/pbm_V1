TARGET = pbm_V1
CFLAGS = -g -Wall -pedantic -ansi
CC = gcc
DEB = gdb

# Cible par défaut
all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $< $(CFLAGS) -o $@

edit: $(TARGET).c
	vi $(TARGET).c

gdb: $(TARGET)
	$(DEB) ./$(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all edit gdb run clean
