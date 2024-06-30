<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
read -p "Enter two no.:" a b
c=$(($a * $b))
if [ $(($c % 2)) -eq 0 ]
then
    echo "$c It is Even Number"
else
    echo "$c It is odd Number."
fi
                     
 
     
     
            
            
           
   

