#!/bin/sh

ifconfig -a | grep -i ether | sed /autoselect/d | tr -d '\t ' | sed "s/ether//"
