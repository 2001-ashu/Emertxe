read -p "Input a number:" num1
#the no is between 15 to 30
if [ $num1 -ge 15 ]
then
	echo "The No is greater than 15"
	if [ $num1 -le 30 ]
	then
		echo "The No is less than 30 "
		
	else
		echo "The no is greater than 30"
	fi
else
	echo "The Number is less than 15"
fi
