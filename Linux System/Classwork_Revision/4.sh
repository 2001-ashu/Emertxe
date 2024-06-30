<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
read -p "Enter A year:" y
a=$(($y % 4))
b=$(($y % 10))
c=$(($y % 100))
if [ $a -eq 0 -a $b -eq 0 -a $c -eq 0 ]
then
    echo "$y It is a Leap Year.."
else
    echo "$y It is not Leap Year.."
fi
                     
 
     
     
            
            
           
   

