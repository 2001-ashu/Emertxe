<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC

read -p "Enter a Number:" n
co=0
for r in `seq $n`
do
    for c in `seq $r`
    do
	co=$((co + 1))
	echo -n "$co "
    done
    echo
done
                     
 
     
     
            
            
           
   

