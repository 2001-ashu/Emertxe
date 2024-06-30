<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
read -p "Enter A Number:" n
for r in `seq $n`
do
    for c in `seq $n -1 1`
    do
	if [ $c -le $r ]
	then
	    if [ $(($(($r + $c)) % 2)) -eq 0 ]
	    then
	echo  -n "1 "
    else
        echo -n "0 "
	    fi
	else 
	    echo -n "  "
	fi
    done
    echo
done
                     
 
     
     
            
            
           
   

