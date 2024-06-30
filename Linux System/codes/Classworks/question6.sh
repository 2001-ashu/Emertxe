<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
read -p "Enter a Number:" n
s=0
l=0
for var in `seq $n`
do
    read -p "Enter the $var value": val
    if [ $var -eq 1 ]
    then
	s=$val
	l=$val
    
    fi  
    if [ $val -lt $s ]
    then
	s=$val
    elif [ $val -gt $l ]
    then
	l=$val

    fi
                           
         
        
                          
      
done
echo "It is Smallest Number:$s"
echo "It is Largest Number:$l"

                     
 
     
     
            
            
           
   

