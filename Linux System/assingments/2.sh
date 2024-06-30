<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
read -p "Enter the number : " n
c=0
for r in `seq $n`
do
    for col in `seq $r`
do
    c=$(($c + 1))
    echo -n "$c "
done
echo
done


                     
 
     
     
            
            
           
   

