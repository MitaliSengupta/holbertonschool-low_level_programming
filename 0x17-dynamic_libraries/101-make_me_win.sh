#!/bin/bash
wget -P /etc https://github.com/MitaliSengupta/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/libtest.so
export LD_PRELOAD=/etc/libtest.so
