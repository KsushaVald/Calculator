SOURCES = umnozhenie.c raznost.c summa.c delenie.c
OBJECTS = $(SOURCES:%.c=%.o)
LIBS = $(addprefix lib, $(SOURCES:.c=.so))

all: $(LIBS)

lib%.so: %.o
		gcc -shared $< -o $@

%.o: %.c
		gcc -fPIC -c $<
 

