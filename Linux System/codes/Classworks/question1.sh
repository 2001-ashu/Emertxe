read -p "Enter two No:" a b
p=$(($a * $b))
ck=$(($p % 2))
if [ $ck -eq 0 ]
then
    echo "$p is a Even Number.."
else
    echo "$p is a Odd Number"
fi
