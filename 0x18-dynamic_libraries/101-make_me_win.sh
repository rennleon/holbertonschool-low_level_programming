#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/renatoleonholberton/holbertonschool-low_level_programming/main/0x18-dynamic_libraries/libnewrand.so
export LD_PRELOAD=/tmp/libnewrand.so
