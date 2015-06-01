CXX := arc-linux-g++
CXXFLAGS := -g3 -O0 -Wl,-q

test-01.x : test-01.C
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm test-01.x
