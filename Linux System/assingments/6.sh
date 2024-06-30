<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC

if [ $# -ne 0 ]
then
    arr=($@)
    for i in ${arr[@]}
    do
	echo "Length of the string ($i) - ${#i}"
    done
else
    echo "Error : Please pass the arguments through command-line."
fi
                     
 
     
     
            
            
           
   

