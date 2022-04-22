PROJ_NAME = SeatHeating

BUILD_DIR = Files

SRC = src/MAIN.c\
src/CASE_1.c\
src/CASE_2.c\
src/CASE_3.c\
src/CASE_4.c\

TEST_SRC=Unity/unity.c\


OBJCOPY = avr-objcopy.exe

AVRDUDE := avrdude

#Options for HEX file generation
HFLAGS = -j .text -j .data -O ihex

INC = -I inc

ifdef OS	
   RM = del /q
   FixPath = $(subst /,\,$1)
   # Name of the compiler used
   CC = avr-gcc.exe
   # Name of the elf to hex file converter used
   AVR_OBJ_CPY = avr-objcopy.exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf				
	  # Correct the path based on OS
      FixPath = $1				
	  # Name of the compiler used
	  CC = avr-gcc
	  # Name of the elf to hex file converter used
	  AVR_OBJ_CPY = avr-objcopy 
   endif
endif

.PHONY:all analysis clean doc

all:$(BUILD_DIR)
	# Compile the code and generate the ELF file
	$(CC) -g -Wall -Os -mmcu=atmega328 -DF_CPU=16000000UL $(INC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)
	
hex: $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)
	#create hex file
	$(OBJCOPY) $(HFLAGS) $< $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).hex)

$(BUILD_DIR):
	# Create directory to store the built files
	mkdir $(BUILD_DIR)

build_test : 
	gcc $(TEST_SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm	
run_test : build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))


analysis: $(SRC)
	#Analyse the code using Cppcheck command line utility
	cppcheck --enable=all $^

doc:
	#Build the code code documentation using Doxygen command line utility
	make -C documentation

clean:
	# Remove all the build files and generated document files
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make -C documentation clean
	rmdir $(BUILD_DIR)