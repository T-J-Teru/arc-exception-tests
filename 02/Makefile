CXX := arc-linux-g++
CXXFLAGS := -g3 -O0 -Wl,-q

test-02.x : test-02.C
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm test-02.x
