.PHONY: all clean test

all:
	cmake -S . -B build
	cmake --build build

run: all
	./build/app


test: all
	cd build && ctest --output-on-failure

clean:
	-rm -rf buildcmake --build build