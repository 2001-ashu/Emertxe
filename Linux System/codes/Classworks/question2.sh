read -p "Enter A Number:" a
k=$(($a % 5))
if [ $k -eq 0 ]
then
  echo "$a It is a multiple of 5"
else
  echo "$a It is a Not Multiple of 5"  
fi
