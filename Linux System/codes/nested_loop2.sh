<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:$$$$$
	   $   $
	   $   $
	   $$$$$
DOC
read -p "Enter a Number :" n
for i in `seq 1 5`
#for((i=1; i<=n; i++))
do 
    for j in `seq 1 5`
   # for((j=1; j<=n; j++))
    do
	if [ $i -eq `seq 1 5` -o $j -eq `seq 1 5` -o $i -eq 1 -o $j -eq 1 ]
	then 
	    echo -e "$"
	else
     
	    echo -e " "
	fi
    done
    echo 
done

                     
 
     
     
            
            
           
   

