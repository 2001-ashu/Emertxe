read -p "Enter Two Number:" num1 num2
product=$(($num1 * num2))
if [ $product -gt 10 ]
then 
	echo "The $product is greater than 10"
elif [ $product -ne 5 ]
then 
	echo"The $product is not equal to 5"
elif [ $product -lt 20 ]
then 
       echo"The $product is less than 20"	
fi
