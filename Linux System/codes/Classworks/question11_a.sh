<<DOC
Name:
Date:
DESCRIPTION:*****
            ****
	    ***
	    **
	    *
SAMPLE I/P:
SAMPLE O/P:
DOC

read -p "Enter a Number:" n
                     
                         
for i in `seq $n`
do
                            
  for j in `seq $n`
    do
	if [ $(($i + $j)) -le 6 ]
	then
	echo -n "* "
	fi
    done
    echo 
done
     
     
            
            
           
   

