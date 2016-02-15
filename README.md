# C++ Boilerplate

[![Build Status](https://travis-ci.org/vaalentin/cpp-boilerplate.svg?branch=master)](https://travis-ci.org/vaalentin/cpp-boilerplate)

Simple C++11 project boilerplate, using [Google Test](https://github.com/google/googletest/) and [Travis CI](https://travis-ci.org/).

## Requirements

- `git`
- `cmake` version `2.8` or higher.
- `gcc` or `clang` that supports `std=c++11`.

## Installation

Generate build files with:

```
$ git clone --recursive git@github.com:vaalentin/cpp-boilerplate.git
$ cd cpp-boilerplate
$ mkdir build
$ cd build
$ cmake -D TESTS=ON ..
```

If you don't use `git clone --recursive`,  you have to manually setup the submodules with:

```
$ git submodule update --init --recursive
```

## Usage

- `src` is where your code goes.

When you add a new file, don't forget to update `CMakeLists.txt` and execute `cmake` again.

```
add_library(core
	# add your *.cpp here
	)
```

- `test` is where your tests go.

Same as `src`, when you add a new file, you have to update `CMakeLists.txt` and execute `cmake` again.

```
add_executables(tests
	./tests/main-test.cpp
	# add your *-test.cpp here
	)
```

- `third-party` hosts the third party libraries.

They don't necessarily have to be submodules. You probably have to `add_subdirectory` and `include_directories` in `CMakeLists.txt`.

- `build` is where the `cmake` generated files and the executables will be.

From this folder:

```
- make # build
- ./main # execute project
- ./tests # execute tests
```

If you wan't to build from scratch again, you can just delete the folder and start again.

## License

MIT, see [LICENSE.md](https://github.com/vaalentin/cpp-boilerplate/blob/master/LICENSE.md) for more details.
