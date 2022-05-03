# Nome do projeto
PROJ_NAME = button

# Microcontrolador
MCU = msp430g2231

# Arquivos .c
C_SOURCE = $(wildcard *.c)

# Aqruivos .h
H_SOURCE = $(wildcard *.h)

# Arquivo .elf
OBJ = $(PROJ_NAME).elf

# Compilador
CC = msp430-gcc

# Uploader
DBG = mspdebug

# Driver
DRV = rf2500

all: $(PROJ_NAME)

flash: button.elf
	$(DBG) $(DRV) "prog $(PROJ_NAME).elf"

$(PROJ_NAME): $(C_SOURCE) $(H_SOURCE)
	$(CC) -Os -mmcu=$(MCU) $(C_SOURCE) -o $(OBJ)

clean:
	rm -rf *.elf
