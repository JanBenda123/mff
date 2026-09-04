CPP=g++
CFLAGS=-Wall -O3 -msse4.1 -std=c++23 #c++17
INCLUDE=
LDFLAGS=
LIBS=
LIBDIRS=

.PHONY: all clear clean purge

all: comparator generator multiply


# Building Targets

multiply: multiply.cpp
	@mpicxx -Wall -O3 -std=c++23 $(addprefix -I,$(INCLUDE)) $(LDFLAGS) $(addprefix -L,$(LIBDIRS)) $(addprefix -l,$(LIBS)) $< -o $@

comparator: comparator.cpp
	@$(CPP) $(CFLAGS) $(addprefix -I,$(INCLUDE)) $(LDFLAGS) $(addprefix -L,$(LIBDIRS)) $(addprefix -l,$(LIBS)) $< -o $@

generator: generator.cpp
	@$(CPP) $(CFLAGS) $(addprefix -I,$(INCLUDE)) $(LDFLAGS) $(addprefix -L,$(LIBDIRS)) $(addprefix -l,$(LIBS)) $< -o $@

serial_multiply: serial_multiply.cpp
	@$(CPP) $(CFLAGS) $(addprefix -I,$(INCLUDE)) $(LDFLAGS) $(addprefix -L,$(LIBDIRS)) $(addprefix -l,$(LIBS)) $< -o $@


# Cleaning Stuff

clear:
	@echo Removing all generated files...
	-@rm -f comparator
	-@rm -f generator
	-@rm -f multiply
	-@rm -f serial_multiply

clean: clear

purge: clear

