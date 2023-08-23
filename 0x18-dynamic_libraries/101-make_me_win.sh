#!/bin/bash
wget https://github.com/Al-27/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libjackpot.so
export LD_PRELOAD="$PWD/libinjection.so"
