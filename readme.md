# Test apps for testing speed of exceptions vs error objects

Are exceptions really slower than error codes/error objects? Well now you can test it yourself with these simple test applications. To compile:

    mkdir build
    cd build
    meson ..
    ninja

To run the tests:

    ninja benchmark

## Short version of results

- when no errors occur, there is not a huge difference, exceptions seem to be a tad faster except on Win32/MinGW where they are a lot slower
- when errors do occur, exceptions are 10x slower than error objects

## Contact

Send your emails to `jpakkane at gmail`.
