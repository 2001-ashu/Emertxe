<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
read -p "Enter a Number to check prime Number:" n
prime=0

                        
for l in `seq 2 2 $n`
do
    if [ $((n % l)) -eq 0 ]
    then
	 prime=1
    fi	
done
    if [ $prime -eq 0 ]
    then
echo "$n it is a Prime Number"
else
    echo "$n Is not a prime Number."
    fi

     
     
            
            
           
   

