read -p "Enter Two number :" a b
p=$(($a * $b))
k=$(($p % 2))
if [ $k -eq 0 ]
then
echo "it is even"
else
    
	echo "odd"
fi
