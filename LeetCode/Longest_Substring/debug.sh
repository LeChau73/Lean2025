#!/bin/bash
echo "break main" > debug.gdb
echo "run" >> debug.gdb
gdb ./main -x debug.gdb