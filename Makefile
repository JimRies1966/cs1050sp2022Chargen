CC = cc
CFLAGS = -c -Wall
LDFLAGS = -L. -lfight

chargen : main.o DandDCharacter.o libfight.a
	cc main.o DandDCharacter.o $(LDFLAGS) -o chargen

%.o : %.c
	$(CC) $(CFLAGS) $^

clean :
	@rm -f *.o
	@rm -f chargen
