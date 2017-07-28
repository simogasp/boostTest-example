Boost Test Example
------------------

A sample to show how to use Boost Test Framework in a cmake project.
The major steps to follow are:

1. enable CTest inside cmake with `enable_testing()`

2. in order to use Boost.Test the relevant component must be in 
```cmake
find_package(Boost COMPONENTS unit_test_framework REQUIRED)
```

3. check the usage of the helper cmake function `add_boost_test()` in [BoostTestHelper.cmake](cmake/BoostTestHelper.cmake).
It allows to add any single test source as a test to be run with `make test`.

4. The function takes the source file and uses its name for the executable. A prefix can be passed to the function in order to, e.g., group together tests belonging to the same module (see below, `greetings_testHello` and `greetings_testGoodbye`).

5. The function also parses each test source and isolates each `BOOST_AUTO_TEST_SUITE`s, so that each suite is run and 
visualised as a separated test (e.g. see `greetings_testGoodbye.test_goodbye` and `greetings_testGoodbye.test_goodbyeWorld`). 
This means that no `BOOST_AUTO_TEST_CASE` shall be left outside a suite or it will not be run during make test.

```bash
Running tests...
Test project /Users/sgaspari/dev/code/popart/libs/sandbox/ctest_example/cmake-build-debug
    Start 1: greetings_testHello.test_hello
1/6 Test #1: greetings_testHello.test_hello ......................   Passed    0.01 sec
    Start 2: greetings_testHello.test_helloWorld
2/6 Test #2: greetings_testHello.test_helloWorld .................   Passed    0.00 sec
    Start 3: greetings_testGoodbye.test_goodbye
3/6 Test #3: greetings_testGoodbye.test_goodbye ..................   Passed    0.00 sec
    Start 4: greetings_testGoodbye.test_goodbyeWorld
4/6 Test #4: greetings_testGoodbye.test_goodbyeWorld .............   Passed    0.00 sec
    Start 5: computing_testMultiplication.test_multiply
5/6 Test #5: computing_testMultiplication.test_multiply ..........   Passed    0.01 sec
    Start 6: computing_testMultiplication.test_computeInterest
6/6 Test #6: computing_testMultiplication.test_computeInterest ...   Passed    0.00 sec

100% tests passed, 0 tests failed out of 6

Total Test time (real) =   0.03 sec

```


### Build

The project depends on Boost Test Framework (`libboost-test-dev`).
In order to build the project simply

```bash
mkdir build
cd build
cmake ..
make -j2

```
Then you can run the tests
```bash
make test
```
[![Build Status](https://travis-ci.org/simogasp/boostTest-example.svg?branch=master)](https://travis-ci.org/simogasp/boostTest-example)

### License

Mozilla Public License v2.0 (see [LICENSE](LICENSE))
