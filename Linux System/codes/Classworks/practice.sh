<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC

count=0
for r in `seq 5`
do
    for c in  `seq 5`
    do
	if [ $(($r + $c)) -gt 5 ]
	then
    	    count=$(($count + 2))
    	    echo -e -n "$count "	
	else
	    echo -e -n " "
	fi
    done
    echo  " " 
done
                     
 
     
     
            
            
           
   

