<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
read -p "Enter a Number:" n
prime=0
for i in `seq 2 2 $n`
do
    if [ $((i % n)) -eq 0 ]
    then
	prime=1
    fi
done
    if [ $prime -eq 0 ]
    then
	echo "$n It is a Prime Number.."
    else
	echo "$n It is not Prime Number.."
    fi

                     
 
     
     
            
            
           
   

