read -p "Enter the first number:": num1 num2
var=$(($num1 + $num2))   
let sub=($num1 - $num2)
mul=`expr $num1 \* $num2`
div=`expr $num1 \/ $num2`
another=$(expr $num1 \* $num2)
echo "Addition Of two number is:$var"
echo "Substraction of two number is:$sub"
echo "Multiplication of two number is:$mul"
echo "Divisioin of Iwo number is:$div"
echo "Another Method  :$another"
