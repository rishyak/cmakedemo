# CMake Demo for Blinky
- Better build system!

## How to compile
This guide focusses on compilation on Linux.

Krzysztof will be writing a similar guide for Windows. 

### 1 Download mbed-tools
```shell
$ python3 -m venv .venv
$ source .venv/bin/activate
$ pip install -r requirements.txt
```

### 2 Configure and "Deploy"
- `mbed-tools` will create the `build` directory if it doesn't exist
  - The default build directory is `cmake_build` instead of the canonical `build`
  - We fix that
- For mbed, "deploy" means checking dependencies
- Some examples for targets would be: `NRF52840_DK` or `DISCO_F429ZI`
```shell
$ mbed-tools deploy
$ mbed-tools configure -m <target> -t GCC_ARM -o build
$ pip install -r mbed-os/requirements.txt
```

### 3 Finally, CMake time
```shell
$ cd build
$ cmake -G Ninja ..
```

### 4 Build with Ninja
```shell
$ ninja
```
- To clean:
  ```shell
  $ ninja clean
  ```

### 5 Upload
- Upload how you see fit
- ARM recommends drag-and-drop
- But it doesn't matter, as of right now, this builds ELF, hex, and bin
