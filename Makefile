SUBDJECT = src
OBJECS = Calculator.o
vpath %.o src

Complex_calculator: $<
		gcc $< -o $@

