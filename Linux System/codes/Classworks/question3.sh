read -p "Enter first side of triangle:" a
read -p "Enter Second side of triangle:" b
read -p "Enter Third side of triangle:" c

m=$(($a * $a))
n=$(($b * $b))
o=$(($c * $c))
k=$(($m + $n))
p=$(($m + $o))

q=$(($o + $n))

if [ $o -eq $k ]
then
    echo "It is a Perfect right Triangle.."

elif [ $m -eq $q ]
then
    echo "It is a Perfect right Triangle.."
elif [ $n -eq $p ]
then
    echo "It is a Perfect right Triangle.."
else
    echo "It is a  Not Perfect right Triangle.."
fi
