<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
for row in `seq 5`
do 
    for col in `seq $row`
    do
	var=$(($(($row + $col)) % 2))
        echo -n  "$var  "
    done 
    echo
done
                     
 
     
     
            
            
           
   

