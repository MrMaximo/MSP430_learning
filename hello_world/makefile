# Variáveis

# Nome do projeto
PROJ_NAME = hello

# Arquivos .c
C_SOURCE = $(wildcard *.c)

# Aqruivos .h
H_SOURCE = $(wildcard *.h)

# Arquivo .elf
OBJ = $(PROJ_NAME).elf

# Compilador
CC = msp430-gcc

# Microcontrolador
MCU = msp430g2231

# Uploader
FLSH = mspdebug

all: $(PROJ_NAME)

flash: hello
	$(FLSH) rf2500 "prog $(OBJ)"

hello: $(C_SOURCE) $(H_SOURCE)
	$(CC) -Os -mmcu=$(MCU) $(C_SOURCE) -o $(OBJ)

clean:
	rm -rf *.elf
