<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
sum=0
for r in `seq 8`
do
    for c in `seq 8`
    do
	sum=$((r + c))
	if [ $((sum % 2)) -eq 0 ]
	then
	    echo -e -n "\e[47m" " "
	else
	    echo -e -n "\e[40m" " "
	fi
    done
    echo -e -n "\e[0m" " "
    echo
done

                     
 
     
     
            
            
           
   

