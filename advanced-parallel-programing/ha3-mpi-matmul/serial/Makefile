CPP=g++
CFLAGS=-Wall -O3 -march=skylake-avx512 -std=c++17 --opt-info-all-vec
INCLUDE=
LDFLAGS=
LIBS=
LIBDIRS=
SOURCE=multiply.cpp
HEADERS=$(shell find . -name '*.hpp')
EXECUTABLE=./serial-mulmatrix

.PHONY: all clear clean purge

all: $(EXECUTABLE)



# Building Targets

$(EXECUTABLE): $(SOURCE) $(HEADERS)
	@$(CPP) $(CFLAGS) $(addprefix -I,$(INCLUDE)) $(LDFLAGS) $(addprefix -L,$(LIBDIRS)) $(addprefix -l,$(LIBS)) $< -o $@



# Cleaning Stuff

clear:
	@echo Removing all generated files...
	-@rm -f $(EXECUTABLE)

clean: clear

purge: clear

