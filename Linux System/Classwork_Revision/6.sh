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
    read -p "$var value is :" val
    if [ $var -eq 1 ]
    then
	s=$val
	l=$val
    fi
    if [ $val -gt $l ]
    then
	l=$val
    elif [ $val -lt $s ]
    then
	s=$val
    fi
done
echo "Smallest Number Is :" $s
echo "Largest Number Is  :" $l
    

                     
 
     
     
            
            
           
   

