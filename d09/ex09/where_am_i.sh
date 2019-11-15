#!/bin/sh
ifconfig -a | grep 'inet ' | awk {'print $2'} || echo "I am lost!"
exit 0
