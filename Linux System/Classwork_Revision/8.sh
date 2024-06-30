<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC

read -p "Enter a Number:" n 
temp=$n
r=0
sum=0
while [ $n -ne 0 ]
do
    r=$(($n % 10))
    sum=$(($(($sum * 10)) + r)) 
    n=$(($n/10))
done
if [ $temp -eq $sum ]
then
    echo "$temp It is Palindome Number"
else
    echo "$temp It is not Palindome Number"
                     
 
fi     
     
            
            
           
   

