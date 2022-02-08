#!/bin/sh

N1=`echo $FT_NBR1 | sed 'y/'\''\\"?!/01234/'`
N2=`echo $FT_NBR2 | sed 'y/mrdoc/01234/'`
R1=`echo "ibase=5;$N1+$N2" | bc`
echo "obase=13;$R1" | bc | sed 'y/0123456789ABC/gtaio luSnemf/'
