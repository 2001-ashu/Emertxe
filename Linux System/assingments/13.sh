<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
arr=(`cut -d ":" -f1 /etc/passwd`)
large=${#arr[0]}
small=${#arr[0]}

for i in ${arr[@]}
do
    if [ ${#i} -gt $large ]
    then
	large=${#i}
	longest=$i

    elif [ ${#i} -lt $small ]
    then
	small=${#i}
	smallest=$i
    fi
done
    
echo "The Longest Name is:"$longest
echo "The Shortest Name is:"$smallest
 
     
     
            
            
           
   

