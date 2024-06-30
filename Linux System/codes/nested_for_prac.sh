<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
read -p "Enter Number": n
count=0
for row in `seq $n`
do 
    for col in `seq $row`
    do
	count=$(($count + 1))
	echo  -n  " $count "
    done
    echo
done

                     
 
     
     
            
            
           
   

