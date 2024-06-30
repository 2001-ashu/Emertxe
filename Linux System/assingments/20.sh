<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC

if [ $# -eq 1 ]                        #To check cla pass or not
then
    if [ -f $1 ]                       #To check file is exit or not
    then
	if [ -s $1 ]	 	       #To Check file is empty or not
	then
	    a=`wc -l < $1`             #counting the line in the file
	    if [ $a -ge 5 ]            #check line count is more than 5
	    then
		b=$(($a/5))            #calculate 20% in that file
		var=(`shuf -i 1-$a -n$b`)    # genrate randomly line count to store in array 

		echo "Before replacing"
		cat $1
		for i in ${var[@]}      
		do
		    sed -i "$i s/.*/<-----------Deleted------------>/g" $1
		done
		echo "After replacing"
		cat $1
	    fi
	else
	    echo "Error : $1 is empty file. So can’t replace the string."
	fi
    else
	echo "Error : No such a file."
    fi
else
    echo "Error : Please pass the file name through command line."
fi








