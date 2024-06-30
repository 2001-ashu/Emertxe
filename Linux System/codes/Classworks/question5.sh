<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC

read -p "Enter First Number:" a 
read -p "Enter Second Number:" b 
#m=$(($a % $b))
n=$(($b % $a))
 if [ $n -eq 0 ]
 then
 echo "$a It is Multiple of $b"    
else
    
 echo "$a It is Not Multiple of $b"
 fi 
 
            
            
           
   

