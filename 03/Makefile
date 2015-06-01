CXX := arc-linux-g++
CXXFLAGS := -g3 -O0 -Wl,-q

test-03.x : test-03.C
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm test-03.x
