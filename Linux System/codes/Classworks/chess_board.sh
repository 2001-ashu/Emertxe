<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
for r in `seq 8`
do
    for c in `seq 8`
    do
	if [ $(($(( $r + $c)) % 2)) -eq 0 ]
	then 
	    echo -e -n "\e[47m" " "
	else
	    echo  -e -n "\e[40m" " "
	fi
    done 
    echo -e "\e[0m" " " 
done

                     
 
     
     
            
            
           
   

