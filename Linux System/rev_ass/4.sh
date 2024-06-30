<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
arr=($@)
if [ $# -eq 0 ]
then
    echo "Please pass cla.."
else
    echo "Empty lines are deleted.."
   # sed `/^[[:space:]]*$/d` $1
    sed '/^[[:space:]]*$/d' $1

fi

                     
 
     
     
            
            
           
   

