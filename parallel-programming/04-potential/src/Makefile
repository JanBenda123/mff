CPP=icpx
CFLAGS=-Wall -O3 -std=c++20 -fsycl -fsycl-targets=spir64_x86_64,nvptx64-nvidia-cuda -fp-model=precise
INCLUDE=./internal .
LDFLAGS=
LIBS=
LIBDIRS=
HEADERS=$(shell find . -name '*.hpp')
TARGET=potential


.PHONY: all clear clean purge

all: $(TARGET)



# Building Targets

$(TARGET): $(TARGET).cpp $(HEADERS)
	@echo Compiling and linking executable "$@" ...
	@$(CPP) $(CFLAGS) $(addprefix -I,$(INCLUDE)) $(LDFLAGS) $(addprefix -L,$(LIBDIRS)) $(addprefix -l,$(LIBS)) $< -o $@

# Cleaning Stuff

clear:
	@echo Removing all generated files...
	-@rm -f $(TARGET)

clean: clear

purge: clear
