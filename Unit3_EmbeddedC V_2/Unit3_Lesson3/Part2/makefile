#@copyright : Mostafa Gamal 
CC = arm-none-eabi-
CFLAGS = -gdwarf-2 -mcpu=cortex-m3
INCS = -I .
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
Project_Name=Learn-in-depth-Mostafa


all: $(Project_Name).bin
	@echo "-------Done-------"


%.o :%.c 
	$(CC)gcc.exe  -c  $(CFLAGS) $(INCS) $< -o $@


$(Project_Name).elf : $(ASOBJ) $(OBJ)
	$(CC)ld.exe -T linker_script.ld $(ASOBJ) $(OBJ) -o $@ -Map=Map_File.map


$(Project_Name).bin: $(Project_Name).elf
	$(CC)objcopy.exe -O binary $< $@