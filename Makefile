SUBDIR =./src
OBJECTS = Calculator.o
vpath %.o src

Complex_calculator: Calculator.o 
		gcc $< -o $@ -ldl -g

.PHONY: prepare $(SUBDIR)

prepare: $(SUBDIR)
$(SUBDIR):
		make -C $@
		

