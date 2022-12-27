#!/bin/bash

cd /home/new_user/
gcc server.c -lfcgi
./a.out &
service nginx start
