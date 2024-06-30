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
rev=0
while [ $n -ne 0 ]
do
    r=$((n % 10))
    rev=$(($((rev * 10)) + r))
    n=$((n/10))
   
done
   if [ $temp -eq $rev ]
   then 
      echo "$temp It is a Palindrome Number..."
  else
      echo "$temp It is Not a Palindrome Number..."
   fi

                     
 
     
     
            
            
           
   

