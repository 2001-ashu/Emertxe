<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC

read -p "Enter a Number:" n
for row in `seq $n`
do
    for col in `seq $n`
    do
   if [ $row -gt $col ]
   then
       echo -n "  "
   else
	echo -n "* "
   fi
done
    echo
done
                     
 
     
     
            
            
           
   

