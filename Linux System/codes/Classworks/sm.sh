<<DOC
Name:
Date:
DESCRIPTION:Fibonacci Series..
SAMPLE I/P:
SAMPLE O/P:
DOC
read -p "Enter Limit :" n
a=0
b=1

for r in `seq $n`
do     
    echo "$a"
    c=$(($a + $b))
    a=$b
    b=$c
done

                     
 
     
     
            
            
           
   

