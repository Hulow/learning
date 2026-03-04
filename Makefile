.PHONY: all clean test

all:
	cmake -S . -B build
	cmake --build build

test: all
	cd build && ctest --output-on-failure

clean:
	-rm -rf buildcmake --build build