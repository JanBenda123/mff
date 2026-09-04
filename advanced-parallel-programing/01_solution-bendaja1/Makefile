CPP=g++
CFLAGS=-Wall -O3 -std=c++20
INCLUDE=
LDFLAGS=
LIBS=atomic
LIBDIRS=
HEADERS=$(shell find . -name '*.hpp')
TARGET=ha1main


.PHONY: all clear clean purge

all: $(TARGET)


# Building Targets

$(TARGET): $(TARGET).cpp $(HEADERS)
	@echo "Compiling and linking $@ ..."
	@$(CPP) $(CFLAGS) $(addprefix -I,$(INCLUDE)) $(LDFLAGS) $(addprefix -L,$(LIBDIRS)) $(addprefix -l,$(LIBS)) $< -o $@

# Cleaning Stuff

clear:
	@echo Removing all generated files...
	-@rm -f $(TARGET)

clean: clear

purge: clear
