read -p "Enter Two No:" a b
p=$(($a * $b))
k=$(($p % 2))
if [ $k -eq 0 -a $p -gt 0 ]
then
    echo "$p It is a Positive Even Number.. "
elif [ $k -eq 0 -a $p -lt 0 ]
then
    echo "$p It is a Negative Even Number.. "
elif [ $k -ne 0 -a $p -gt 0 ]
then
    echo "$p It is a Positive  Odd Number.."
elif [ $k -ne 0 -a $p -lt 0 ]
then
    echo "$p It is a Negative Odd Number.."
else
    echo "Invalid"
fi
