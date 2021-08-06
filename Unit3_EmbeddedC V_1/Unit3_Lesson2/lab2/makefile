#@copyright : Mostafa Gamal 
CC = arm-none-eabi-
CFLAGS = -g -mcpu=arm926ej-s
INCS = -I .
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)


all: Mostafa_Gamal.bin
	@echo "Done"


%.o :%.c 
	$(CC)gcc.exe  -c  $(CFLAGS) $(INCS) $< -o $@ 

startup.o : startup.s 
	$(CC)as.exe $(CFLAGS) $< -o $@ 


Mostafa_Gamal.elf : $(ASOBJ) $(OBJ)
	$(CC)ld.exe -T linker_script.ld $(ASOBJ) $(OBJ) -o $@ 


Mostafa_Gamal.bin: Mostafa_Gamal.elf
	$(CC)objcopy.exe -O binary $< $@