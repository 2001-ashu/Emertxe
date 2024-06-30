<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
arr=(`cut -d ":" -f3 /etc/passwd`)
count=0
if [ $# -eq 0 ]
then
    for i in ${arr[@]}
    do
	if [ $i -ge 500 -a $i -le 10000 ]
	then
	    count=$(($count + 1))
	fi
    done
	    echo "Total count of user ID between 500 to 10000 is: "$count
	
    
elif [ $# -eq 2 ]
then
    if [ $1 -lt $2 ]
    then
	for k in ${arr[@]}
	do
	    if [ $k -ge $1 -o $k -le $2 ]
	    then
		count=$(($count + 1))
	    fi
	done
		echo "Total count of user ID between 0 to 100 is : "$count
	    else
		echo "Error : Invalid range. Please enter the valid range through CL."

    fi

elif [ $# -eq 1 ]
then
    echo "Error : Please pass 2 arguments through CL.\n Usage : ./user_ids.sh 100 200"

fi                     
 
     
     
            
            
           
   

