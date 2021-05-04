#!/bin/bash
wget -P /tmp https://github.com/renatoleonholberton/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/libnewrand.so
export LD_PRELOAD=/tmp/libnewrand.so
