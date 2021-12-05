
## Zephyr Recruitment Task:

### Description:
Write a simple dummy_driver and a test application for native_posix target according to specification:
- Driver should be configurable in build-time using `prj.conf` into 2 modes:
  - `Fixed mode`: driver API function should return only fixed integer value
  - `Thread mode`: driver API function should return integer value calculated inside a thread running in the driver (return values in range of [0; 32.767])
- Test application should verify if the driver is running in `Fixed mode` or `Thread mode`
- Code should be submitted as Pull Request to https://github.com/cthings-co/zephyr-recruitment-task

### Project structure:

    .
    ├── app (application directory)
    │   ├── boards
    │   │   └── native_posix.overlay (overlay for the device-tree)
    │   ├── CMakeLists.txt
    │   ├── prj.conf (configuration of the test application)
    │   └── src
    │       └── main.c (test application)
    ├── CMakeLists.txt
    ├── drivers
    │   ├── CMakeLists.txt
    │   ├── Kconfig
    │   └── misc
    │       ├── CMakeLists.txt
    │       ├── dummy_driver
    │       │   ├── CMakeLists.txt
    │       │   ├── dummy_driver.c (dummy_driver code)
    │       │   ├── dummy_driver_priv.h
    │       │   └── Kconfig (configuration file for dummy_driver)
    │       └── Kconfig
    ├── dts
    │   └── bindings
    │       └── misc
    │           └── dummy,dummy_driver.yaml (device-tree binding for dummy_driver)
    ├── include
    │   └── drivers
    │       └── misc
    │           └── dummy_driver
    │               └── dummy_driver.h (public API of dummy_driver)
    ├── Kconfig
    ├── README.md
    ├── west.yml
    └── zephyr
        └── module.yml

### Repository initialization:

    $ mkdir recruitment-task && cd recruitment-task
    $ git clone https://github.com/cthings-co/zephyr-recruitment-task.git
    $ cd zephyr-recruitment-task
    $ west init -l .
    $ west update

### Building project:

    $ cd app
    $ west build --board native_posix .
    $ ./build/zephyr/zephyr.elf

### Example output:

    *** Booting Zephyr OS build f6fd4444b6be  ***
    Hello World! native_posix

### Useful resources:

- https://docs.zephyrproject.org/latest/getting_started/index.html
- https://github.com/zephyrproject-rtos/zephyr

