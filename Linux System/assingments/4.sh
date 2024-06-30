<<DOC
Name:Ashutosh Uday Zende
Date:30/10/23
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
arr=($@)
if [ $# -ne 0 ]
then
    echo "Empty lines are deleted"
    sed '/^[[:space:]]*$/d' $1
else
    echo "Error: Please pass the file name through command line."
fi

                     
 
     
     
            
            
           
   

