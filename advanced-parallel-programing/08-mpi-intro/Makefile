CPP=mpicxx
CFLAGS=-Wall -O3 -std=c++23
INCLUDE=.
LDFLAGS=
LIBS=
LIBDIRS=
SOURCE=mpi_test.cpp
HEADERS=$(shell find . -name '*.hpp')
EXECUTABLE=./mpi_test


.PHONY: all clear clean purge

all: $(EXECUTABLE)



# Building Targets

$(EXECUTABLE): $(SOURCE) $(HEADERS)
	@echo Compiling and linking executable "$@" ...
	@$(CPP) $(CFLAGS) $(addprefix -I,$(INCLUDE)) $(LDFLAGS) $(addprefix -L,$(LIBDIRS)) $(addprefix -l,$(LIBS)) $< -o $@



# Cleaning Stuff

clear:
	@echo Removing all generated files...
	-@rm -f $(EXECUTABLE)

clean: clear

purge: clear
