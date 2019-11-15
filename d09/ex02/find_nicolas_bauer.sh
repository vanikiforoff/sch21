#!/bin/sh
cat $1 | grep -iE "nicolas\s+bauer" | grep - | awk '{print $(NF-1)}'
exit 0
