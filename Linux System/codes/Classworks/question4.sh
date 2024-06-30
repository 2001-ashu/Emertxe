<<DOC

Name:
Date:
DESCRIPTION: Check it is a leap year or not
SAMPLE I/P:
SAMPLE O/P:
DOC


read -p "Enter a year:" y
a=$(($y % 4))

b=$(($y % 100))
c=$(($y % 400))
if [ $a -eq 0 -a $b -eq 0 -a $c -eq 0 ]
then 
    echo  "$y It Is A Leap Year"
              
else
echo "$y It is Not a leap Year"
fi
 
     
     
            
            
           
   

