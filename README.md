# Piscine42-v2

## Shell00

### Ex00
echo "Z" > z
### Ex01
mkfile -n 40 testShell00
touch -t 06012342 testShell00
chmod 455 testShell00
(dont forget to tar)
### Ex02
mkdir test0 test2
mkfile -n 4 test1
mkfile -n 1 test3
mkfile -n 2 test4
touch -t 06012047 test0
touch -t 06012146 test1
touchx -t 06012245 test2
touch -t 06012344 test3
touch -t 06012343 test4
chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4
ln test3 test5
ln -s test0 test6
touch -ht 06012220 test6
(Dont forget to tar)
### Ex03
kinit
klist > klist.txt
### Ex04
ls -mpUt
### Ex05
!/bin/sh
git log -n 5 --pretty="%H"
### Ex06
!/bin/sh
git status --ignored -s | grep '!!' | cut -c4-
### Ex07
patch a sw.diff
mv a b
### Ex08
find . -type f \( -name "*~" -o "#*#"\) -print -delete
### Ex09
41	string	42	42 file

## Shell01

### Ex01
id -Gn $FT_USER | tr ' ' ',' | tr -d '\n'
### Ex02
find . -type f -name "*.sh" -print | sed "s/.\///" | sed "s/\(.*\).sh/\1/"
### Ex03
find . \( -type f -o -type d \) -print | wc -l | tr -d ' '
### Ex04
ifconfig -a | grep -i ether | sed /autoselect/d | tr -d '\t ' | sed "s/ether//"
### Ex05
touch
Dont forget to remove eol characterr to set text only to 42
### Ex06
ls -l | awk 'NR%2'
### Ex07
cat /etc/passwd | grep -v '#' | awk '!(NR % 2)' | cut -f1 -d":" | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr '\n' ',' | sed 's/,$/./' | tr -d '\n'
