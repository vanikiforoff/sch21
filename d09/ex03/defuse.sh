#!/bin/sh
echo "$(echo "$(stat -r bomb.txt | cut -d ' ' -f9)" - 1)" | bc
exit 0
