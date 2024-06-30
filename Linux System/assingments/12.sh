<<DOC
Name:Ashutosh Zende
Date:31/10/2023
DESCRIPTION:A12-Write Script to print contents of file from given line number to next given number of lines.
SAMPLE I/P:
SAMPLE O/P:
DOC
lno=`wc -l < $3`
if [ $# -eq 3 ]
then
    add=$(($1 + $2))
    len=$(($add - 1))
    if [ $lno -ge $len ]
    then
      echo "`head -$len  $3 | tail -$2`"
    else
	echo "Error: data.txt is having only 10 lines. file should have atleast 14 lines"
    fi
else
    echo "Error: arguments missing!"
    echo "Usage: ./file_filter.sh start_line upto_line filename"
    echo "For eg. ./file_filter.sh 5 5 <file>"
fi           
 
     
     
            
            
           
   

