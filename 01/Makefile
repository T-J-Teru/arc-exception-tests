CXX := arc-linux-g++
CXXFLAGS := -g3 -O0 -Wl,-q

CXXSRC := $(wildcard *.C)
EXENAME := test-$(shell basename $$PWD).x

$(EXENAME) : $(CXXSRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(EXENAME)
