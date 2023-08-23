#!/bin/bash
wget https://raw.github.com/Al-27/alx-low_level_programming/master/0x18-dynamic_libraries/libjackpot.so
export LD_PRELOAD="$PWD/libinjection.so"
