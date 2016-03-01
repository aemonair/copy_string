#Makefile

ROOTPATH   =     .
SRC        =     $(ROOTPATH)/src
COM        =     $(ROOTPATH)/com
BIN        =     $(ROOTPATH)/bin
MAIN       =     $(ROOTPATH)/test

OBJ        =     $(OBJ1) $(OBJ2) $(OBJ3)
OBJ1       =     $(COM)/my_strcpy.o 
OBJ2       =     $(COM)/my_strncpy.o 
OBJ3       =     $(COM)/main_test.o
TARGET     =     $(BIN)/test

all : install

$(OBJ):
	@echo "-objects-"
	$(CC)  -c $(SRC)/my_strcpy.c -o $(OBJ1) 
	$(CC)  -c $(SRC)/my_strncpy.c -o $(OBJ2) 
	$(CC)  -c $(MAIN)/main_test.c -o $(OBJ3) 

install:$(OBJ)
	@echo "-install-"
	$(CC)  $(OBJ) -o $(TARGET)
	@echo "---------"
	@date

.PHONE:
clean:
	rm -f $(OBJ) $(TARGET) 
