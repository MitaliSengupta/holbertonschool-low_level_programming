#!/bin/bash
wget https://github.com/MitaliSengupta/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/libtest.so  -P /usr/bin
export LD_PRELOAD=/usr/bin/libtest.so
