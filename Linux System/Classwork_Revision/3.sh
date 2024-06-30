<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
read -p "Give first side:" a
read -p "Give Second side:" b
read -p "Give third side:" c
aa=$(($a * $a))
bb=$(($b * $b))
cc=$(($c * $c))
ab=$(($aa + $bb))
bc=$(($bb + $cc))
ac=$(($aa + $cc))

if [ $aa -eq $bc -o $bb -eq $ac -o $cc -eq $ab ]
then
    echo "It is a perfect right angle triangle."

    else

    echo "It is not a perfect right angle triangle."
fi
