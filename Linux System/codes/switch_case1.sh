# Read a opertor and do the arithmatic operion


read -p "Enter a First Number" a
read -p "Enter a Second Number" b
read -p "Give Operator to perform operation " op

# case statement

case $op in
    +)sum=$(($a + $b))
	echo "$sum"
	;;
    
    -)sub=$(($a - $b))
	echo "$sub"
	;;

   
    '*')mul=$(($a * $b))
	echo "$mul"
	;;	
    
    /)div=$(($a / $b))
	echo "$div"
	;;
	
    *)echo "Invalid"

    esac
