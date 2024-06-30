<<DOC
Name:
Date:
DESCRIPTION: A19 - For each directory in the $PATH, display the number of executable files in that directory
SAMPLE I/P:
SAMPLE O/P:
DOC
arr=(`echo $PATH |tr ":" " " | cut -d " " -f1-9`)
echo "${arr[@]}"

total=0
for dir in ${arr[@]}
do
    cd $dir
    count=0
    for list in `ls`
    do
	if [ -x $list ]
	then
	    count=$(($count + 1))
	fi
    done
    echo "Current dir :" $dir
    echo "Current count :" $count
    total=$(($count + $total))
done
echo "Total-" $total



                     
 
     
     
            
            
           
   

