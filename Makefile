.PHONY: all clean test

all:
	cmake -S . -B build
	cmake --build build

test: all
	cd build && ctest
	-rm -rf build

clean:
	-rm -rf build