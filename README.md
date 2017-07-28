Boost Test Example
------------------

A sample to show how to use Boost Test Framework in a cmake project.

### Build

The project depends on Boost Test Framework (libboost-test-dev).
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
