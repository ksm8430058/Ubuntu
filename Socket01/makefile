OBJECTS =main.o print.o input.o
SRCS =main.c print.c input.c
CFLAGG =-g
TARGET =test
$(TARGET) : $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)
clean :
	rm -f $(OBJECT) $(TARGET) core

main.o : main.c common.h
print.o : print.c common.h
input.o : input.c common.h
