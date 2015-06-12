CXX := arc-linux-g++
CXXFLAGS := -g3 -O0 -Wl,-q

CXXSRC := $(wildcard *.C)
EXENAME := test-$(shell basename $$PWD).x

LIBNAME := lib11.so

.PHONY: all
all:  $(LIBNAME) $(EXENAME)

$(EXENAME) : $(CXXSRC)
	$(CXX) $(CXXFLAGS) -o $@ $^ -L. -l11

$(LIBNAME) : lib11.C lib11.H
	$(CXX) -fpic -shared -o $@ $<

.PHONY: clean
clean:
	-rm -f $(EXENAME) $(LIBNAME)
